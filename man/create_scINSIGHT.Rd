% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/scinsight.R
\name{create_scINSIGHT}
\alias{create_scINSIGHT}
\title{Create an scINSIGHT object.}
\usage{
create_scINSIGHT(norm.data, condition)
}
\arguments{
\item{norm.data}{List of normalized expression matrices (genes by cells). Gene names should be the same in all matrices.}

\item{condition}{Vector specifying sample conditions.}
}
\value{
\code{scINSIGHT} object with norm.data slot set.
}
\description{
This function initializes an scINSIGHT object with normalized data passed in.
}
\examples{
# Demonstration using matrices with randomly generated numbers
S1 <- matrix(runif(50000,0,2), 500,100)
S2 <- matrix(runif(60000,0,2), 500,120)
S3 <- matrix(runif(80000,0,2), 500,160)
S4 <- matrix(runif(75000,0,2), 500,150)
data = list(S1, S2, S3, S4)
sample = c("sample1", "sample2", "sample3", "sample4")
condition = c("control", "activation", "control", "activation")
names(data) = sample
names(condition) = sample
scINSIGHTx <- create_scINSIGHT(data, condition)
}
