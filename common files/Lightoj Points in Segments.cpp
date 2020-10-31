#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    cin >> t;

    for(ll i=1; i<=t; i++)
    {
        cout << "Case "<<i<<":\n";

        ll n, q;
        cin >> n >> q;

        ll arr[n];

        for(ll j=0; j<n; j++) cin >> arr[j];

        while(q--)
        {
            ll a, b;
            cin >> a >> b;

            if(a > arr[n-1] || b < arr[0]){
                cout << 0 <<endl;
                continue;
            }

            ll ind1=-1, ind2=-1;

            ///ind1 finding
            if(arr[0]>=a)
                ind1 = 0;
            else{
                ll suru = 0;
                ll sesh = n-1;

                while(suru<=sesh){
                    ll mid = (suru+sesh)/2;
                    if(arr[mid] == a){
                        ind1 = mid;
                        break;
                    }

                    if(arr[mid]>a){
                        if(arr[mid-1]<a){
                            ind1 = mid;
                            break;
                        }

                        sesh = mid-1;
                    }

                    else{
                        ///choto majherta
                        if(arr[mid+1]>=a){
                            ind1 = mid+1;
                            break;
                        }

                        suru = mid+1;
                    }
                }
            }

            ///ind2 finding
            if(arr[n-1]<=b)
                ind2 = n-1;
            else{
                ll suru = 0;
                ll sesh = n-1;

                while(suru<=sesh){
                    ll mid = (suru+sesh)/2;
                    if(arr[mid] == b){
                        ind2 = mid;
                        break;
                    }

                    if(arr[mid]>b){
                        if(arr[mid-1]<=b){
                            ind2 = mid-1;
                            break;
                        }

                        sesh = mid-1;
                    }

                    else{
                        ///choto majherta
                        if(arr[mid+1]<b){
                            ind2 = mid;
                            break;
                        }

                        suru = mid+1;
                    }
                }
            }

            cout << ind2-ind1+1<<endl;

        }
    }

    return 0;
}
