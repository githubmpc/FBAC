#' @export
simulateBatchData <- function(N=2500, p, theta, sds, batch, zz){
  if(missing(batch)) batch <- as.character(rep(1, N))
##  if(is(p, "numeric")) p <- matrix(p, nrow=length(unique(batch)), ncol=ncol(theta),
##                                   byrow=TRUE)
##  rownames(p) <- unique(batch)
  if(missing(zz)) {
    zz <- simulateZ(N, p)
##    zz <- rep(NA, N)
##    nb <- table(batch)
##    for(b in unique(batch)){
##      zz[batch==b] <- simulateZ(nb[b], p[b, ])
    ##    }

  }
  yy <- rep(NA, N)
  ub <- unique(batch)
  rownames(theta) <- rownames(sds) <- ub
  for(b in ub){
    index <- which(batch==b)
    nn <- length(index)
    cn <- zz[index]
    mu <- theta[b, ]
    s <- sds[b, ]
    yy[index] <- rnorm(nn, mu[cn], s[cn])
  }
  params <- ModelParams("batch", y=yy, k=ncol(theta), batch=batch)
  object <- constructModel(type(params), data=y(params),
                           k=k(params), batch=batch(params))
  dat(object) <- yy
  z(object) <- factor(zz, levels=unique(sort(zz)))
  theta(object) <- computeMeans(object)
  sigma2(object) <- computeVars(object)
  p(object) <- as.numeric(table(z(object))/N)
  object
}


#' @export
simulateData <- function(N, p, theta, sds){
  zz <- simulateZ(N, p)
  y <- rnorm(N, theta[zz], sds[zz])
  params <- ModelParams("marginal", y=y, k=length(theta))
  object <- initializeModel(params)
  dat(object) <- y
  z(object) <- factor(zz, levels=unique(sort(zz)))
  p(object) <- p
  theta(object) <- as.numeric(sapply(split(y(object), z(object)), mean))
  sigma2(object) <- as.numeric(sapply(split(y(object), z(object)), var))
  p(object) <- as.numeric(sapply(split(y(object), z(object)), length)/length(z(object)))
  ##sigma2(object) <- sds^2
  object
}