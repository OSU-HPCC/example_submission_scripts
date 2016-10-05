
/* hello_world_openmp.c */

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main (int argc, char** argv)
{ /* main */
    int number_of_threads;
    int thread, this_thread;

    number_of_threads = omp_get_max_threads();

#pragma omp parallel for
    for (thread = 0; thread < number_of_threads; thread++) {

        this_thread = omp_get_thread_num();

       /*
        * Output to stdout the message from this thread.
        */

        printf("%d of %d: Hello, world!\n", this_thread, number_of_threads);

    } /* for thread */

} /* main */

