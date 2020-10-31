#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, a, b;
    cin>>n>>a>>b;

    int ans=a;
    ans+=b;
    if(b>=0){
        if(ans%n==0)
            ans=n;
        else
            ans%=n;
    }
    else{
        if(ans<1){
            ans=abs(ans)+1;
            if(ans%n==0)
                ans=1;
            else{
                ans%=n;
                ans=n-ans+1;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
