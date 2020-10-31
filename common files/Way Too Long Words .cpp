#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,l;
    cin>>n;
    l=n;
    string arr[n];
    while(l--)
        cin>>arr[l];
    l=n;
    while(l--){
        int len=arr[l].length();
        if(len>10)
            cout<<arr[l][0]<<len-2<<arr[l][len-1]<<endl;
        else
            cout<<arr[l]<<endl;
    }

    return 0;
}
