#include <bits/stdc++.h>
using namespace std;
#define db double

int main ()
{
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        db ab, ac, bc, rat;
        cin >> ab >> ac >> bc >> rat;

        cout <<fixed<<setprecision(7)<< "Case "<<i<<": "<<ab*sqrt(rat/(1+rat))<<endl;
    }

    return 0;
}
