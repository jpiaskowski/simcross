# collapse_do_alleles
#' Collapse alleles for simulated DO genotypes
#'
#' When simulating Diversity Outbreds, we need to specify parents
#' 1-16, with 9-16 being the males from strains 1-8.  This function
#' collapses replaces alleles 9-16 with 1-8, to make the result
#' ordinary DO-type data.
#'
#' @param xodata The sort of detailed genotype/crossover data
#' generated by \code{\link{sim_from_pedigree}}.
#'
#' @return The input object, with alleles 9-16 replaced by 1-8.
#'
#' @export
#' @keywords utilities
#' @seealso \code{\link{sim_do_pedigree}}, \code{\link{sim_do_pedigree_fix_n}},
#' \code{\link{sim_from_pedigree}}
#'
#' @examples
#' # simulate DO pedigree
#' tab <- sim_do_pedigree(8)
#'
#' # simulate genotypes for that pedigree
#' dat <- sim_from_pedigree(tab)
#' # collapse to alleles 1-8
#' dat <- collapse_do_alleles(dat)
#'
#' # also works with data on multiple chromosomes
#' \donttest{dat <- sim_from_pedigree(tab, c("1"=100, "2"=75, "X"=100), xchr="X")
#' dat <- collapse_do_alleles(dat)}

collapse_do_alleles <-
    function(xodata)
{
    if(!("mat" %in% names(xodata[[1]]))) { # multiple chromosomes?
        if(!("mat" %in% names(xodata[[1]][[1]])))
            stop("input doesn't look like the output of sim_from_pedigree")
        return(lapply(xodata, collapse_do_alleles))
    }

    lapply(xodata, function(a) {
        # grab alleles
        mata <- a$mat$alleles
        pata <- a$pat$alleles

        # 9-16 -> 1-8
        mata[mata > 8] <- mata[mata > 8] - 8
        pata[pata > 8] <- pata[pata > 8] - 8

        # paste back into object
        a$mat$alleles <- mata
        a$pat$alleles <- pata

        a })

}
