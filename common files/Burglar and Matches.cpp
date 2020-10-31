#include <bits/stdc++.h>
using namespace std;

int maxin(int b[], int m){
    int h=b[0],j=0;

    for(int i=1; i<m; i++){
        if(b[i]>h){
            h=b[i];
            j=i;
        }
    }

    return j;
}

int main ()
{
    int n,m,c=0;
    cin>>n>>m;
    int a[m], b[m];

    for(int i=0; i<m; i++)
        cin>>a[i]>>b[i];

    int p;


    for(int i=0; i<=n; ){
        p=maxin(b, m);

        int k=a[p]+i;

        if(k<n){
            c=c+a[p]*b[p];
            b[p]=0;q
            i=k;
        }

        else if(k>n){
            c=c+(n-i)*b[p];
            break;
        }

        else{
            c=c+a[p]*b[p];
            break;
        }

    }

    cout<<c;
    return 0;
}
