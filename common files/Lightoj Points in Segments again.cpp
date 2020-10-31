#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    scanf("%lld", &t);

    for(ll i=1; i<=t; i++)
    {
        printf("Case %lld:\n", i);

        ll n, q;
        scanf("%lld %lld", &n, &q);

        ll arr[n];

        for(ll j=0; j<n; j++) scanf("%lld", &arr[j]);

        while(q--)
        {
            ll a, b;
            scanf("%lld %lld", &a, &b);

            if(a > arr[n-1] || b < arr[0]){
                printf("0\n");
                //cout << " c1\n";
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

                    if(arr[mid]>a)
                        sesh = mid-1;

                    else{
                        ///choto majherta
                        suru = mid+1;
                    }
                }

                if(ind1 == -1){
                    ind1 = suru;
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
                        sesh = mid-1;
                    }

                    else{
                        ///choto majherta
                        suru = mid+1;
                    }
                }

                if(ind2 == -1){
                    ind2 = sesh;
                }
            }

            //cout << "ind1 "<<ind1<<" ind2 "<<ind2<<endl;
            printf("%lld\n", ind2-ind1+1);
            //cout << " c2\n";

        }
    }

    return 0;
}

