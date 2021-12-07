#include<limits.h>
/*@
    requires \valid(a) && \valid(b);
    requires INT_MIN < *a < INT_MAX;
    requires INT_MIN < *b < INT_MAX;
    requires \separated(a,b);
    assigns *a;
    ensures \old(*b) ==> *a == 0 ;
    ensures ! \old(*b) ==> *a == \old(*a) ;
    ensures *b == \old(*b);
*/
void reset_1st_if_2nd_is_true(int* a,int const* b)
{
    if(*b)  *a=0;
}