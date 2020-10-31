#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];

    int a=0;
    vector <int> vec;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
            //cout<<a<<endl;
        }
        if(arr[i]==0 || i==n-1){
            vec.push_back(a);
            a=0;
        }
    }

    int l=vec.size();

    if(l!=1)
        vec[l-1]+=vec[0];

    int m=vec[0];
    for(int i=1; i<l; i++){
        if(vec[i]>m)
            m=vec[i];
    }

    cout<<m;

    return 0;
}
