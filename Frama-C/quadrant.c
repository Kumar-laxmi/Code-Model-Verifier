#include<limits.h>
/*@
    requires INT_MIN < x < INT_MAX && x!=0;
    requires INT_MIN < y < INT_MAX && y!=0;
    behavior first:
        assumes x>0 && y>0;
        ensures \result == 1;
    behavior second:
        assumes x<0 && y>0;
        ensures \result == 2;
    behavior third:
        assumes x<0 && y<0;
        ensures \result == 3;
    behavior fourth:
        assumes x>0 && y<0;
        ensures \result == 4;
    disjoint behaviors first,second,third,fourth;
    complete behaviors;
*/
int quadrant(int x,int y)
{
    if(x>0 && y>0)
        return 1;
    else if(x<0 && y>0)
        return 2;
    else if(x<0 && y<0)
        return 3;
    else if(x>0 && y<0)
        return 4;
}