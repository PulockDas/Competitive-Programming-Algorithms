#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin>>arr[i];

    int c;
    pair<int, int> p;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    for(int i=1; i<=100; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(arr[j]!=i)
                c+=abs(i-arr[j])-1;
        }
        p=make_pair(c, i);
        q.push(p);
    }

    cout<<q.top().second<<" "<<q.top().first;

    return 0;
}
