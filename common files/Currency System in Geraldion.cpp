#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int c;
    cin>>n;
    while(n--){
        cin>>c;
        if(c==1){
            cout<<"-1";
            break;
        }
    }
    if(n==-1)
        cout<<"1";
    return 0;
}
