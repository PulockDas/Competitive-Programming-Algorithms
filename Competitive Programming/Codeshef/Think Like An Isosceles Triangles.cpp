#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(1){
        if(pow % 2 == 1 && pow != 1){
            ans *= base;
        }

        pow /= 2;

        if(pow == 0)
            break;
        base = base*base;
    }

    return ans*base;
}




void solve(ll test){
    ll query, angle;
    cin >> query >> angle;

    if(query == 1 || query == 2 || query == 3){
        if(query==1){
            double num = (180-angle*1.0)/2.0;
            cout << num <<' '<<num<<endl;
        }
        else if(query==2){
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << angle<<' '<<180-2*angle<<endl;
        }

        else{
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << 180-2*angle<<" "<<angle<<endl;
        }
    }

    else if(query == 4 || query == 6 || query == 5){
        if(query==5){
            double num = (180-angle*1.0)/2.0;
            cout << num <<' '<<num<<endl;
        }
        else if(query==6){
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << angle<<' '<<180-2*angle<<endl;
        }

        else{
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << 180-2*angle<<" "<<angle<<endl;
        }
    }

    else{//jasbxbcwdcbkj
        if(query==9){
            double num = (180-angle*1.0)/2.0;
            cout << num <<' '<<num<<endl;
        }
        else if(query==7){
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << angle<<' '<<180-2*angle<<endl;
        }

        else{
            if(2*angle > 179){
                cout << -1 << endl;
                return;
            }

            cout << 180-2*angle<<" "<<angle<<endl;
        }
    }
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