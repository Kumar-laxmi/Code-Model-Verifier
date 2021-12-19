proctype A()
{
     int data = 56;
     if
     :: (data%2==0) -> printf("Data is Even");
     :: else -> printf("Data is Odd");
     fi
}
proctype B()
{
     int a=3,b=1;
     int min = (a<=b -> a : b);
     printf("min=%d\n",min);
}
init
{
     run A();
     run B();
}
