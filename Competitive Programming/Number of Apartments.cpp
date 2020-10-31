#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;



ll arr[3][1001];
pll parent[3][1001];

void table(){
    ll coins[]={3, 5, 7};

    for(ll i=0; i<3; i++){
        arr[i][0] = 1;
    }

    for(ll i=1; i<=1000; i++){
        if(i%3 == 0){
            arr[0][i] = 1;
            parent[0][i].first = 0;
            parent[0][i].second = i-3;
        }
    }

    for(ll i=1; i<3; i++){
        for(ll j=1; j<=1000; j++){
            if(arr[i-1][j]){
                arr[i][j]= 1;

                parent[i][j].first = i-1;
                parent[i][j].second = j;
            }

            else{
                ll num= j-coins[i];

                if(num<0){
                    arr[i][j] = arr[i-1][j];

                    if(arr[i][j] == 1){
                        parent[i][j].first = i-1;
                        parent[i][j].second = j;
                    }
                }

                else{
                    arr[i][j] = arr[i][num];
                    if(arr[i][j] == 1){
                        parent[i][j].first = i;
                        parent[i][j].second = j-coins[i];
                    }
                }
            }
        }
    }
}




void solve(ll test){
    ll n;
    cin >> n;
    
    if(!arr[2][n]){
        cout << -1 << endl;
        return;
    }
    
    ll three=0, five=0, seven=0;

    ll i=2, j = n;
    while(j!=0){
        ll f = parent[i][j].first;
        ll s = parent[i][j].second;

        if(s<j){
            if(i==2)
                seven++;
            else if(i==1)
                five++;
            else
                three++;
        }

        i = f, j = s;
    }

    cout << three << ' '<<five<<' '<<seven<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    table();

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}