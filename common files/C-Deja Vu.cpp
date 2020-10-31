#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> fibo;

void mak_fibo(){
    ll f0 = 1;
    ll f1 = 1;

    fibo.push_back(f0);
    fibo.push_back(f1);
    ll jog =f0+f1;

    while(jog <= 1000000000){
        fibo.push_back(jog);
        ll r = f1;
        f1 = jog;
        f0 = r;
        jog = f0+f1;
    }
}

int main ()
{
    ll n, m;
    cin >> n >> m;

    mak_fibo();

    if(n<44)
        cout << m % fibo[n];
    else
        cout << m;
    cout << endl;
    //cout << fibo[42];

    return 0;
}
