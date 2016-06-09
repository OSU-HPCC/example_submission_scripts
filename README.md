This repository is for example submissions scripts for applications on Cowboy
and is a work in progress.  Contributions are welcome!

These instructions assume you have already gone through the HPC new user tutorial.

To run the python example on Cowboy:
* First copy the example folder to your current directory:

  `cp -r  /opt/example_submission_scripts/python .`

* Change directory into the newly copied python directory

  `cd python`
 
 * check to see if the files are present
 
  `ls`
  `elephant.pbs  elephant.py  README.md`

* The `elephant.pbs` is the job submission script that you can use as a template for your future python script

* Submit the job this way:

  `qsub elephant.pbs`

As in the New user tutorial, you can use `showq |grep yourusername`  to check job status after giving the scheduler a few minutes to incorporate it.   Once the job is finished, you will have a new file in your directory with the results of your job.  
