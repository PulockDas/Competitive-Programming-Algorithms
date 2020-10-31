#include <bits/stdc++.h>
using namespace std;
int mark[200000];
typedef pair<int,int> pi;

int main ()
{
    int n, k;
    cin >>n >>k;

    int arr[n], arr2[n];

    for(int i=0; i<n; i++)
        cin >>arr[i];

    pi p;
    priority_queue <pi, vector<pi>, greater<pi>> m;

    int a;

    for(int i=0; i<n; i++){
        cin >>arr2[i];
        a = arr[i] - arr2[i];
        p = make_pair(a, i);
        m.push(p);
    }

    int i;
    for(i=0; i<k; i++){
        p = m.top();
        m.pop();
        mark[p.second] = 1;
    }

    int ans = 0;
    for(i=0; i<n; i++){
        if(mark[i])
            ans += arr[i];

        else
            ans += min(arr[i], arr2[i]);
    }

    cout << ans;

    return 0;
}
