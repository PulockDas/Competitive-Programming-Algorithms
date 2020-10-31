#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a, s=0, n1=n+1;

    while(n--){
        cin >> a;
        s+=a;
    }

    int ans = 0;
    for(int i=1; i<6; i++){
        if((s+i) % n1 != 1)
            ans++;
    }

    cout << ans;

    return 0;
}
