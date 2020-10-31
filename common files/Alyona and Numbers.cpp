#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin>> n >>m;

    int c;
    long long ans=0;
    for(int i=1; i<=n; i++){
        c=i+m;
        c/=5;
        int b=c-i/5;
        ans+=b;
    }

    cout<<ans;

    return 0;
}
