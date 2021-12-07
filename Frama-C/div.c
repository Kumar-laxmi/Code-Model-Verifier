#include<limits.h>
/*@
   requires INT_MIN<x/y<INT_MAX && y!=0;
   requires INT_MIN<x%y<INT_MAX && y!=0;
   requires \separated(q,r);
   requires \valid(q) && \valid(r);
   ensures *q==x/y;
   ensures *q>=0;
   ensures *r==x%y;
   ensures *r>=0;
*/   
void div_rem(unsigned x,unsigned y,unsigned *q,unsigned *r)
{
   *q=x/y;
   *r=x%y;
}
