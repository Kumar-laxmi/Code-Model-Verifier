byte x=2;
proctype incr()
{
      atomic
      {
          if
          :: (x<10) -> x++
          fi
      }
}
proctype dec()
{
      atomic
      {
          if
          :: (x>0) -> x--
          fi
      }
}
init
{
      run incr();
      run decr();
}
