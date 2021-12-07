#include<limits.h>
/*@
   requires INT_MIN<b-a<INT_MAX;
   ensures \result>=0;
   ensures (a<=b ==> \result==b-a) &&
           (b<a ==> \result==a-b);
*/
int distance(int a,int b)
{
    if(a<b)
       return b-a;
    else
       return a-b;
}
