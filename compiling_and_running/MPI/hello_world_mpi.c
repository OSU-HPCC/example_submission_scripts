
/* hello_world_mpi.c */

#include <stdio.h>
#include <stdlib.h>
#include "mpi.h"

int main (int argc, char** argv)
{ /* main */

    int number_of_processes;
    int my_rank;
    int mpi_error_code;

   /*
    * Start up MPI.
    */
    mpi_error_code =
        MPI_Init(&argc, &argv);

   /*
    * Query this MPI process's rank.
    */
    mpi_error_code =
        MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

   /*
    * Query the number of MPI processes in this run.
    */
    mpi_error_code =
        MPI_Comm_size(MPI_COMM_WORLD, &number_of_processes);


   /*
    * Output to stdout the message from this rank.
    */
    printf("%d of %d: Hello, world!\n", my_rank, number_of_processes);

   /*
    * Shut down MPI.
    */
    mpi_error_code =
        MPI_Finalize();

} /* main */

