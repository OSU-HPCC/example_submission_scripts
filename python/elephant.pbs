#!/bin/bash
#PBS -q express
#   specify the queue batch, express or bigmem
#PBS -l nodes=1:ppn=1
#   request 1 processor on 1 node
#PBS -l walltime=10:00
#PBS -j oe
cd $PBS_O_WORKDIR
 
module load python/3.5.0

python elephant.py

