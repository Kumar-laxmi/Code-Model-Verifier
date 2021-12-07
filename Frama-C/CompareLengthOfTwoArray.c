/*@
    requires \valid_read(arr1+(0..sizeof(arr1)-1)) && \valid_read(arr2+(0..sizeof(arr2)-1));
    behavior Length_NotEqual:
        assumes (sizeof(arr1)/sizeof(arr1[0]))!=(sizeof(arr2)/sizeof(arr2[0]));
        ensures \result==0;
    behavior Length_Equal:
        assumes (sizeof(arr1)/sizeof(arr1[0]))==(sizeof(arr2)/sizeof(arr2[0]));
        ensures \result==1;
    complete behaviors;
    disjoint behaviors Length_NotEqual,Length_Equal;
*/
int CompareLength(int arr1[],int arr2[])
{
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    if(len1==len2)
        return 1;
    else
        return 0;
}
