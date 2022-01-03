/*@ requires \valid(p) && \valid(q);
  @ requires \separated(p,q);
  @ behavior p_changed:
  @ assumes n > 0;
  @ requires \valid(p);
  @ assigns *p;
  @ ensures *p == n;
  @ behavior q_changed:
  @    assumes n <= 0;
  @    requires \valid(q);
  @    assigns *q;
  @    ensures *q == n;
  @
*/
void f(int n,int *p,int *q) 
{
    if(n > 0)
    {
        *p = n;
    }
    else
    {
        *q = n;
    }
}

// The following function illustrates the importance of differentassignsclausesfor each behavior.