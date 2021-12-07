/*@
   requires \valid(a) && \valid(b);
   behavior one:
               assumes *a<*b;
               ensures A:*\old(a)==\old(*b);
               ensures B:*\old(b)==\old(*a);
               assigns *a,*b;
*/
void max_ptr(int *a,int *b) {
   if(*a<*b) {
       int temp=*b;
       *b=*a;
       *a=temp;
   }
}
   
