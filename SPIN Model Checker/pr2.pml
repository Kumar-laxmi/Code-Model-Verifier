int state = 0

proctype one()
{
    (state == 0) -> state = state + 1
}
proctype two()
{
    (state == 0) -> state = state -1
}

init
{
    run one();
    run two();
}
