#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    double arr[n],s=0;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
        s+=(arr[i]/100);

    cout<<fixed<<showpoint<<setprecision(4);
    cout<<s/n*100;
    return 0;
}
