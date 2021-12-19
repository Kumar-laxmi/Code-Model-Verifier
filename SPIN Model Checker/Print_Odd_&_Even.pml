proctype Odd()
{
     int i=1;
     do
     :: if
        :: (i<50) -> i++
        :: else -> break
        fi
     :: if
        :: (i%2!=0) -> printf("%d",i);
        :: else -> skip
        fi
     od
}
proctype Even()
{
     int i=1;
     do
     :: if
        :: (i<=50) ->i++
        :: else -> break
        fi
     :: if
        :: (i%2==0) -> printf("%d",i);
        :: else -> skip
        fi
     od
}
init
{
     run Odd();
     run Even();
}
      
