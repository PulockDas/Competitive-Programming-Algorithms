#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;




void solve(ll test){
    cout << "Case "<<test<<":\n";

    ll n, m;
    cin >> n >> m;

    vector <ll> vec(1001);
    ll left=501, right = 502, occupied=0;

    for(ll i=0; i<m; i++){
        string command;
        
        cin >> command;

        if(command=="pushLeft"){
            ll number;
            cin >> number;

            if(occupied<n){
                occupied++;

                vec[left--]=number;

                cout << "Pushed in left: "<<number<<endl;
            }else{
                cout << "The queue is full\n";
            }

            continue;
        }

        if(command=="pushRight"){
            ll number;
            cin >> number;

            if(occupied<n){
                occupied++;

                vec[right++]=number;

                cout << "Pushed in right: "<<number<<endl;
            }else{
                cout << "The queue is full\n";
            }

            continue;
        }

        if(command=="popLeft"){
            if(!occupied){
                cout << "The queue is empty\n";
                continue;
            }

            occupied--;
            cout << "Popped from left: "<<vec[++left]<<endl;
            continue;
        }
        
        if(command=="popRight"){
            if(!occupied){
                cout << "The queue is empty\n";
                continue;
            }

            occupied--;
            cout << "Popped from right: "<<vec[--right]<<endl;
            continue;
        }
    }

    return;

}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}