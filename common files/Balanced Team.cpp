#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);
    vector<int> vec;
    int i=0, j=n-1;
    if(j==0){
        cout<<1;
        return 0;
    }

    if(arr[i] == arr[j]){
        cout<<n;
        return 0;
    }

    while(i!=j){
        int b=arr[j]-arr[i];
        while(5<b){
            j--;
            b=arr[j]-arr[i];
        }
       vec.push_back(j-i+1);
       j=n-1;
        while(arr[i]==arr[i+1]){
            i++;
        }
        i++;
    }

    int l=vec.size();
    int m=vec[0];

    for(i=1; i<l; i++){
        if(m<vec[i])
            m=vec[i];
    }

    cout<<m;

    return 0;
}
