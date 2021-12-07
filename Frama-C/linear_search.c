#include<limits.h>
/*@
    requires 0<size<INT_MAX;
    requires INT_MIN<key<INT_MAX;
    requires \valid_read(arr+(0..size-1));
    ensures \forall integer i;
        behavior not_found:
           assumes \forall integer i;
            0<=i<size && arr[i]!=key;
           \result==0;
        behavior found:
           assumes \forall integer i;
            0<=i<size && arr[i]==key;
           \result==1;
        complete behaviors;
        disjoint behaviors;
*/
int linear_search(int arr[],int size,int key)
{
    /*@
        loop invariant \forall integer i;
        loop invariant 0<=i<=size;
        loop assigns i;
        loop variant size-i;
    */
    for(int j=0;j<size;j++)
    {
        if(key==arr[j])
        {
            return 1;
        }
    }
    return 0;
}