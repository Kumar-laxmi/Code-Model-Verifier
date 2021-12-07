#include<limits.h>
/*@
    requires 0<n<INT_MAX;
    requires \valid_read(arr+(0..n-1));
    ensures \forall integer i;
       0<=i<n ==> \result<=arr[i];
*/
int min_in_array(int arr[],int n)
{
    int min=arr[0];
    /*@
        loop invariant \forall integer x;
            0<=x<i ==> min<=arr[x];
        loop invariant 0<=i<=n;
        loop assigns i,min;
        loop variant n-i;
    */
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}