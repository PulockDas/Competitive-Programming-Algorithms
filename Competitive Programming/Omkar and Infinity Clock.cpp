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

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int arr[n];
        
        if(k>1)
            k = 2+k%2;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        while(k--){
            int m = arr[0];
            
            for(int i=1; i<n; i++){
                if(m<arr[i])
                    m = arr[i];
            }

            for(int i=0; i<n; i++){
                arr[i] = m-arr[i];
            }
        }

        for(int i=0; i<n; i++){
            cout << arr[i]<<' ';
        }

        cout << endl;
    }

    return 0;
}