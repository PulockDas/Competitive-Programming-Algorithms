#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;

    int l=x.length();
    int s, i, j;

    for(i=0; i<l; ){
        s=0;
        for(j=i; j<l; j++){
            if(x[i]==x[j]){
                s++;
                if(s==7){
                    cout<<"YES";
                    return 0;
                }
             }
             else{
                i=j;
                break;
            }
        }
        if(j==l){
            cout<<"NO";
            return 0;
        }
    }
}
