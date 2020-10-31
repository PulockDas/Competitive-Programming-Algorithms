#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int height[n],maxi=0,mini=0;

    for(int i=0; i<n; i++){
        cin>>height[i];
        if(height[maxi]<height[i])
            maxi=i;
        if(height[mini]>=height[i])
            mini=i;
    }

    if(maxi==0 && mini==n-1)
        cout<<"0";
    else{
        if(maxi>mini)
            cout<<maxi+n-2-mini;
        else
            cout<<maxi+n-1-mini;
    }

    return 0;
}
