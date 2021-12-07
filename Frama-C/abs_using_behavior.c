#include<limits.h>
/*@
   requires val>INT_MIN;
   assigns \nothing;
   ensures \result>=0;
   behavior one:
            assumes 0<=val;
            ensures \result==val;
   behavior two:
            assumes val<0;
            ensures \result==-val;
   complete behaviors;
   disjoint behaviors;
*/
int abs(int val)
{
   if(val<0)
      return -val;
   else
      return val;
}
