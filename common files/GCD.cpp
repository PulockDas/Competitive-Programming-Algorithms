#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

int main ()
{
    int n;

    while(1){
        cin >> n;
        if(n == 0)
            break;

        int ans=0;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                if(j % i == 0)
                    ans += i;
                else
                    ans += gcd(i, j);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
