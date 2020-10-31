#include <bits/stdc++.h>
using namespace std;
int hor[51];
int ver[51];

int main ()
{
    int n,l;
    cin>>n;
    l=n+1;
    n=n*n;
    int arr[n][2];

    vector < int> ans;

    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
        if(hor[arr[i][0]]==0 && ver[arr[i][1]]==0){
            ans.push_back(i+1);
            hor[arr[i][0]]=1;
            ver[arr[i][1]]=1;
        }
    }

    int si=ans.size();
    for(int i=0; i<si; i++)
        cout<<ans[i]<<" ";

    return 0;
}
