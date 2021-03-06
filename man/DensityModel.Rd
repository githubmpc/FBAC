% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/methods-DensityModel.R
\name{DensityModel}
\alias{DensityModel}
\title{Constructor for DensityModel class}
\usage{
DensityModel(object, merge = FALSE)
}
\arguments{
\item{object}{see \code{showMethods(DensityModel)}}

\item{merge}{Logical.  Whether to use kmeans clustering to cluster
the component means using the estimated modes from the overall
density as the centers for the \code{kmeans} function.}
}
\value{
An object of class 'DensityModel'
}
\description{
Instantiates an instance of 'DensityModel' (or 'DensityBatchModel')
from a MarginalModel or BatchModel object. See the corresponding
class for additional details and examples.
}
\examples{
     dm <- DensityModel(MarginalModelExample)
}
\seealso{
\code{\link{DensityModel-class}} \code{\link{kmeans}}
}

