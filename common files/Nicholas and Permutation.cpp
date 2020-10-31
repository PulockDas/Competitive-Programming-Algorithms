#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a;
    int ps1, ps2;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a == 1)
            ps1 = i;
        else if(a == n)
            ps2 = i;
    }

    int ans;

    if(ps1 < ps2){
        ans = max(ps2, n-ps1-1);
    }

    else{
        ans = max(ps1, n-ps2-1);
    }

    cout << ans;

    return 0;
}
