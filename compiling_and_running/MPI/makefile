
MPICC  = mpicc
CFLAGS = -O

all:	hello_world_mpi

clean:
	rm -f *.[oadD] *.[mM][oO][dD] hello_world_mpi

hello_world_mpi:	hello_world_mpi.c
	${MPICC} ${CFLAGS} -o hello_world_mpi hello_world_mpi.c

