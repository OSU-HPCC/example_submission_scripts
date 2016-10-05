Instructions for compiling and running your own code by example.
================================


- [Setup](#setup)
- [Serial](#serial)
- [OpenMP](#openmp)
- [MPI](#mpi)

Setup
=====

On cowboy these files are located in `/opt/example_submission_scripts/compiling_and_running`
       
You can copy the entire directory to your current directory and move into it like this:
   
    cp -r /opt/example_submission_scripts/compiling_and_running . 

    cd compiling_and_running

Serial
======
We will begin by looking at the serial (also known as single core) version of Hello World. This is the Hello World program written in the C language. All the program does is output `Hello World` to the screen. It runs on one single processor core of a single computer.

* Begin by moving into the serial directory

        cd serial

* If you want, take a look at the code.

        cat hello_world_serial.c

* Compile the program using make

         make

* Alternatively, in case you don't use makefiles

         gcc hello.c -o hello 

* Submit the job (you can see inside the submit script by using `cat hello_world_serial.pbs`).

        qsub hello_world_serial.pbs

*    You should get a job id when you submit the job, e.g. `473283.mgmt1' and when the job is finished, you will see an output file (your id number will be different).

       cat hello_world_serial.pbs.o473283

*    When you are done, go back to the parent directory.

        cd ..

OpenMP
======
OpenMP allows us to write parallel software so that our program will multiple processor cores within a single computer.

*    Move into the openMP directory.
        
        cd openMP

*    If you want, take a look at the code. How is it different than the code for the serial version of Hello World?

        cat hello_world_openmp.c

*    Compile the program.

        make

*    Submit the job to the scheduler.

        qsub hello_world_openmp.pbs

*    Check out your output using `cat`. Since we are using OpenMP, the program ran in parallel on a single node.

*    When you're done go back to the parent directory.

        cd ..

MPI
===
We now get to look at parallel software that uses multiple computers/compute nodes all at the same time. The software most often used for this kind of computing is called Message Passing Interface (MPI).

*    Move into the MPI directory.

        cd mpi
    
*    Compile the program using OpenMPI.

        module load openmpi-1.4/intel

        make

*    Submit job.

        qsub hello_world_mpi.pbs

*    Check out the results.

        cat hello_world_mpi.out

Playing with MPI
----------------
*    MPI is the most common tool used in supercomputing to allow nodes within a supercomputer to talk to each other. We can change the number of nodes that Hello World uses. Open the submit script in a text editor and follow the directions inside.

        nano hello_world_mpi.pbs

*    Submit job again with the change.

        qsub hello_world_mpi.pbs

*    What changed?

*    Try playing around with different numbers. If you request more than two nodes don't forget to change the queue.
