#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    cin >> t;

    for(ll i=1; i<=t; i++){
        ll s;
        cin >> s;

        ll sroot = sqrt(s);
        //cout << sroot;

        if(sroot*sroot == s){
            if(sroot%2 == 0)
                cout << "Case "<<i<<": "<< sroot <<" "<< 1;
            else
                cout << "Case "<<i<<": "<< 1 <<" "<< sroot;
        }

        else{
            if((sroot)*(sroot) + sroot+1 >= s){
                if(sroot % 2 == 0)
                    cout << "Case "<<i<<": "<< sroot+1 <<" "<< s-(sroot)*(sroot);
                else
                    cout << "Case "<<i<<": "<<s-(sroot)*(sroot)<<" "<< sroot+1 ;
            }

            else{
                if(sroot % 2 == 0)
                    cout << "Case "<<i<<": "<< (sroot+1)*(sroot+1)-s+1 <<" "<< sroot+1;
                else
                    cout << "Case "<<i<<": "<< sroot+1<< " "<< (sroot+1)*(sroot+1)-s+1;
            }

        }

        cout << endl;
    }

    return 0;
}
