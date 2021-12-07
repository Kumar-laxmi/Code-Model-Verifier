/*@
   requires 0<=c<=255;
   behavior Alphabet:
       assumes 97<=c<=122 || 65<=c<=90;
       ensures \result==1;
   behavior NotAlphabet:
       assumes 0<=c<65 || 90<c<97 || 122<c<=255;
       ensures \result==0;
   complete behaviors Alphabet,NotAlphabet;
   disjoint behaviors;
*/
int alphabet_letter(char c)
{
    if(('a'<=c && c<='z')||('A'<=c && c<='Z'))
           return 1;
    else
           return 0;
}
