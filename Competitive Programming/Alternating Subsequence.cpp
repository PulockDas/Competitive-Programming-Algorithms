#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        ll arr[n];

        bool pos = false, neg = false;

        cin >> arr[0];

        ll sum = 0, best, worst;

        if(arr[0] > 0){
            pos = true;
            best = arr[0];
        }else{
            neg = true;
            worst = arr[0];
        }

        if(n==1){
            cout << arr[0]<<endl;
            continue;
        }

        for(ll i=1; i<n; i++){

            cin >> arr[i];

            if(i==n-1){
                if(arr[i]>0){
                    if(pos){
                        best = max(best, arr[i]);
                        sum+=best;
                    }
                    else{
                        sum += worst;
                        sum += arr[i];
                    }
                }

                else{
                    if(neg){
                        worst = max(worst, arr[i]);
                        sum +=worst;
                    }
                    else{
                        sum += best;
                        sum += arr[i];
                    }
                }

                break;
            }

            if(arr[i]>0){
                if(pos){
                    best = max(best, arr[i]);
                }
                else{
                    sum += worst;
                    pos = 1;
                    neg = 0;
                    best = arr[i];
                }
            }

            else{
                if(neg){
                    worst = max(worst, arr[i]);
                }
                else{
                    sum += best;
                    pos = 0;
                    neg = 1;
                    worst = arr[i];
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}