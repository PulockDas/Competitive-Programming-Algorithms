#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    if(n%2==0)
        cout<<n*n/2<<endl;
    else
        cout<<(n+1)*n/2-n/2<<endl;

    for(int i=1; i<=n; i++){
            if(i%2!=0){
                for(int j=1; j<=n; j++){
                    if(j%2!=0)
                        cout<<"C";
                    else
                        cout<<".";
                }
            }
            else{
                for(int j=1; j<=n; j++){
                    if(j%2!=0)
                        cout<<".";
                    else
                        cout<<"C";
                }
            }
            cout<<endl;
    }
    return 0;
}
