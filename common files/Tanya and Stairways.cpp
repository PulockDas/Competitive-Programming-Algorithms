#include <bits/stdc++.h>
using namespace std;
int st[1001];

int main ()
{
    int n;
    cin>>n;
    int a;
    int s=0;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1)
            s++;
        st[s]++;
    }
    cout<<s<<endl;

    for(int i=1; i<=s; i++){
        cout<<st[i]<<' ';
    }

    return 0;
}
