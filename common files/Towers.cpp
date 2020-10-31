#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    set <int> s;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    sort(arr, arr+n);

    set <int> :: iterator it;

    int maxi=0, i=0;

    for(it=s.begin(); it!=s.end(); it++){
        int m=0;
        for(; i<n; i++){
            if(arr[i]==*it)
                m++;
            else
                break;
        }
        if(maxi<m)
            maxi=m;
            //cout<<maxi<<endl;
    }

    cout<<maxi<<" "<<s.size();

    return 0;
}
