#include <bits/stdc++.h>
using namespace std;

int arr[3][3];
int comp[3][3];

int main ()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin>>arr[i][j];

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            comp[i][j]+=arr[i][0]+arr[i][1]+arr[i][2];
            comp[i][j]+=arr[0][j]+arr[1][j]+arr[2][j]-arr[i][j];
            cout<<comp[i][j]<<endl;
        }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(comp[i][j]%2==0)
                cout<<"1"<<" ";
            else
                cout<<"0"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
