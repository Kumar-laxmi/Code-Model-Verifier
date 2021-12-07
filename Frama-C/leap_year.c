#include<limits.h>
/*@
    requires INT_MIN < y < INT_MAX;
    behavior LEAP:
        assumes ((y%4==0) && (y%100!=0)) || (y%400==0);
        ensures \result == 1;
    behavior NOT_LEAP:
        assumes !(((y%4==0) && (y%100!=0)) || (y%400==0));
        ensures \result == 0;
    disjoint behaviors LEAP,NOT_LEAP;
    complete behaviors;
*/
int leap(int y)
{
    return ((y%4==0) && (y%100!=0)) || (y%400==0) ;
}