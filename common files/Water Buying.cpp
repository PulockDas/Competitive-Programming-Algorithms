#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin>>q;
    long long n, a, b;
    //long long cost=0;
    while(q--){
        cin>>n>>a>>b;
        if(2*a<b){
            cout<<a*n<<endl;
        }
        else{
            long long bco=n/2;
            if(n%2==0){
                cout<<bco*b<<endl;
            }
            else{
                int r=n%2;
                cout<<bco*b+a*r<<endl;
            }
        }
    }

    return 0;
}
