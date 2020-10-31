#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int l,a1=0,a2=0;
    cin>>l;
    char arr[l];

    for(int i=0; i<l; i++){
        cin>>arr[i];
        if(arr[i]=='1')
            a1++;
        else
            a2++;
    }

    cout<<abs(a1-a2);

    return 0;
}

