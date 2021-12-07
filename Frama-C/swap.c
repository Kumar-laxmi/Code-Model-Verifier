/*@ requires \valid(a) && \valid(b);
    ensures A:*\old(a)==\old(*b);
    ensures B:*\old(b)==\old(*a);
    assigns *a,*b;
*/
void swap(int*a,int*b)
{
     int tmp= *a;
     *a= *b;
     *b=tmp;
     return;
}
