/*@
     requires \valid(a) && \valid(b);
    assigns  *a, *b ;
    ensures  \old(*a) < \old(*b)  ==> *a == \old(*b) && *b == \old(*a) ;
    ensures  \old(*a) >= \old(*b) ==> *a == \old(*a) && *b == \old(*b) ;
*/
void max_ptr(int *a,int *b) {
    if(*a<*b) {
        int temp=*b;
        *b=*a;
        *a=temp;
    }
 }