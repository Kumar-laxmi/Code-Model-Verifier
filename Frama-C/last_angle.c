/*@
    requires 0<=first<=180;
    requires 0<=second<=180;
    ensures \result==180-first-second;
*/
int last_angle(int first,int second)
{
    return 180 - first - second;
}