#include<limits.h>
/*@
    requires \valid(a) && \valid(b) && \valid(c);
    requires \separated(a,b,c);
    behavior TRUE:
        assumes (*a)<=(*b) && (*b)<=(*c);
        ensures \result == 1;
        assigns \nothing;
    behavior FALSE:
        assumes !((*a)<=(*b) && (*b)<=(*c));
        ensures \result == 0;
        assigns \nothing;
    disjoint behaviors TRUE,FALSE;
    complete behaviors;
*/
int order_3(int *a,int *b,int *c)
{
    if((*a)<=(*b) && (*b)<=(*c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}