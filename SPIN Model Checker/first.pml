proctype Reverse()
{
    int value=123;
    int reversed=0;
    do
    :: reversed = reversed + (value % 10);
    :: value = value/10;
    :: (value==0) -> break;
    od
    printf("value=%d,reversed=%d\n",value,reversed)
}
proctype Max()
{
     int a=3,b=1;
     int max = (a>=b -> a : b);
     printf("max=%d\n",max);
}
init
{
    run Reverse(); 
    run Max();
}
        
