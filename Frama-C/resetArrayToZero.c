#include<limits.h>
/*@    
    requires 0<n<INT_MAX;
    requires \valid(arr+(0..n-1));
    ensures \forall integer i;
       0<=i<n ==> arr[i]==0;
*/
void ResetToZero(int arr[],int n)
{
    /*@
        loop invariant \forall integer x;
           0<=x<i ==> arr[x]==0;
        loop invariant 0<=i<=n;
        loop assigns i,arr[0..i-1];
        loop variant n-i;
    */
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
}
