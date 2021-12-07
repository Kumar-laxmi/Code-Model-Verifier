#include<limits.h>
/*@
   requires INT_MIN<b-a<INT_MAX;
   behavior one:
            assumes a<b;
            ensures \result==b-a;
   behavior two:
            assumes b<a;
            ensures \result==a-b;
   behavior three:
            assumes b==a;
            ensures \result==0;
*/
int distance(int a,int b)
{
   if(a<b)
      return b-a;
   else
      return a-b;
}
