#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;
    int c=0;
    if(m%n==0){
        m/=n;
        while(m%2==0){
            c++;
            m/=2;
        }

        while(m%3==0){
            c++;
            m/=3;
        }

        if(m==1)
            cout<<c;
        else
            cout<<-1;
    }

    else
        cout<<-1;

    return 0;
}
