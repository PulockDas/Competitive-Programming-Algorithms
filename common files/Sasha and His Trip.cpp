#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, v;
    cin>>n>>v;

    int spend;
    if(n-1<=v)
        spend=n-1;

    else{
        spend=v;
        int m=n-v-1;
        for(int i=2; i<m+2; i++)
            spend+=i;
    }

    cout<<spend;

    return 0;
}
