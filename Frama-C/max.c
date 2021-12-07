#include<limits.h>
/*@
   requires a<INT_MAX && b<INT_MAX;
   requires a>INT_MIN && b>INT_MIN;
   ensures \result==\max(a,b);
*/
int max(int a,int b)
{
    return a>b?a:b;
}
