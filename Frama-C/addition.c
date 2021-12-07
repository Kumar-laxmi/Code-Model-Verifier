#include<limits.h>
/*@ 
     requires INT_MIN<a+b<INT_MAX;
     ensures \result==a+b;
*/
int addition(int a,int b)
{
    return a+b;
}
