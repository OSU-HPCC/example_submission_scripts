Python website: https://www.python.org/

These instructions assume you have already gone through the HPC new user tutorial.

To run this example on Cowboy:
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







The `elephant.py` script will create a graphic file (.png) 

You will need to download that file to your desktop to view it.


