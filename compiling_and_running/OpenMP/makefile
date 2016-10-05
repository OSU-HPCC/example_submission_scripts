
CC  = icc
CFLAGS = -O -openmp

all:	hello_world_openmp

clean:
	rm -f *.[oadD] *.[mM][oO][dD] hello_world_openmp

hello_world:	hello_world.c
	${CC} ${CFLAGS} -o hello_world_openmp hello_world_openmp.c

