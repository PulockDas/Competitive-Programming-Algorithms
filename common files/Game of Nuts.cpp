#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[54322];

void calculate(){
    for(ll i=3; i<54322; i+=2)
        arr[i] = arr[i-2] + 1;
}

int main ()
{
    calculate();

    ll n;
    cin >> n;

    ll sum = 0;
    ll input;

    while(n--){
        cin >> input;
        sum += arr[input];
    }

    if(sum % 2 == 1) cout << "Daenerys";
    else cout << "Stannis";

    cout << endl;

    return 0;
}
