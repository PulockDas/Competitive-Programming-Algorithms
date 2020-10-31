#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int need[3];
    int gpb[3];
    cin>>need[0]>>need[1]>>need[2];
    cin>>gpb[0]>>gpb[1]>>gpb[2];
    if(need[0]<=gpb[0]){
        gpb[0]=gpb[0]-need[0]+gpb[1];
        if(gpb[0]>=need[1]){
            gpb[0]=gpb[0]-need[1]+gpb[2];
            if(gpb[0]>=need[2])
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";

    return 0;
}
