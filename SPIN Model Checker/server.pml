/* Number of each type of client */
#define NUM_CLIENTS 1

/* Define the named constants */
mType = {NONE, REQ1, REQ2};

/* Declare a shared variable */
show mType request = NONE;

active proctype server()
{
     /* Waiting for a request is a valid place to end. */
     endwait:
     do
     :: request==REQ1 ->
        printf("Processing request type 1. \n");
        request = NONE;
     :: request==REQ2 ->
        printf("Processing request type 2. \n");
        request = NONE;
     od;
}

active[NUM_CLIENTS] proctype client1()
{
     atomic
     {
        request==NONE ->
        request = REQ1;
     }
}

active[NUM_CLIENTS] proctype client2()
{
     atomic
     {
        request==NONE ->
        request = REQ2;
     }
} 
