#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    double l=n;
    int arr[n];
    int pos=0, neg=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
    }

    if(pos>=ceil(l/2))
        cout<<1<<endl;
    else if(neg>=ceil(l/2))
        cout<<-1<<endl;
    else
        cout<<0<<endl;

    return 0;
}
