#include <bits/stdc++.h>

using namespace std;

main ()
{
    string line[]="1 -2 10000 -50 20 7 445";
    char *p, *e;
    long input;
    int co=0;
    p=&line[0];

    for(p=&line[0]; ;p=e)
    {
        input=strtol(p ,&e, 10);
        if(p==e)
        {
            break;
        }
        co++;
    }
    cout<<co;
}
