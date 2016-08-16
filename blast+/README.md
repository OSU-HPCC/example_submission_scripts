Blast main page: http://blast.ncbi.nlm.nih.gov/Blast.cgi 

Blast manual: http://www.ncbi.nlm.nih.gov/books/NBK279690/ 

Blast command line options: http://www.ncbi.nlm.nih.gov/books/NBK279675/ 



How to use blast on OSU HPC Center's cluster supercomputer Cowboy

Outline:  
    1. Go through New User Tutorial up to job submission: https://hpcc.okstate.edu/content/new-user-tutorial  
    2. Submit an example Blast job: 
 


After you have logged into Cowboy:
    

1. Move to your scratch directory where there's plenty of room for large bio data.

   `$ cd /scratch/username`

   where 'username' is your username or login name 

2. Create a new folder (or directory) for our example work, to help keep organized

   $ mkdir blast_example

3. Move to your new directory

   $ cd blast_example

4.  Check:
    
   $ ls 
   $ pwd

5. Copy the example files into your current directory

   $ cp /opt/example_submission_scripts/blast+/* .

   note the space followed by a period at the end of the last command -- that means copy the files *here*

6. OBEY:  type in the following command to submit the blast job now so that it'll finish before the end of class

   $ qsub blastn.pbs

   (the output will include your job id number)

7. While it's working through the queue we can example the submit script and the input fasta file.

   $  less blastn.pbs

  or if you want to edit it:
    
   $ nano blastn.pbs

   $ less seq.fasta

8. Look to see if job is finished or running (many ways to do this)

   $ ls
  (look for files with several numbers at the end of the filename (that would be the jobid number)

   $ showq -u username

   $ checkmyjobs

9.  Once it's done, examine the output file

   $ less blastn_results.txt 


Blast has many other options... 




    
