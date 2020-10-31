#include <bits/stdc++.h>
using namespace std;

int a1=0,a2=1;

int fibonnaci(int n){
   if(n==1) return 1;
   else{
        int s;
        for(int i=1; i<n; i++){
            s=a1+a2;
            a1=a2;
            a2=s;
        }
        return s;
   }a1=a2;
}

int main()
{
    int n;
    cout<<"Please enter your wanted fibonnaci number:\n";
    cin>>n;
    cout<<fibonnaci(n);
    return 0;
}
