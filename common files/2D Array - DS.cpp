#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[6][6];
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            cin>>arr[i][j];

    priority_queue <int > sum;

    int i, j, s;
    for(i=1; i<5; i++)
        for(j=1; j<5; j++){
            s=0;
            s+=arr[i][j]+arr[i-1][j]+arr[i+1][j]+arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j+1];
            sum.push(s);
        }
    cout<<sum.top();

    return 0;
}
