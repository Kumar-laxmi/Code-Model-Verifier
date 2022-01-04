/*Number of copies of the process to run*/
#define NUM_PROCS 3

show int z = 0;
show bool locked = false;

active[NUM_PROCS] proctype increment()
{
     show int new_z;
     atomic 
     {
          !locked ->            /* Lock Acquired */
              locked = true;    /* Acquire Lock */
     }
     
     /* Critical Section of Code */
     new_z = z;
     new_z++;
     z = new_z;
     
     locked = false;            /* Release of lock */
     /* End Critical Section of Code */
}
