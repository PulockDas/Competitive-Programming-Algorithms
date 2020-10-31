#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i=1;

    while(1){
        float n;
        cin >> n;

        if(n<0)
            break;

        cout <<"Case "<<i<<": "<< ceil(log2(n))<<endl;
        i++;
    }

    return 0;
}
