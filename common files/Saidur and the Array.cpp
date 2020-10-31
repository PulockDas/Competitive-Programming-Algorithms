#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, q;
    cin >> n >> q;

    long long arr[n];

    for(long long i=0; i<n; i++)
        cin >> arr[i];

    long long l, r;
    for(long long i=0; i<q; i++){
        cin >> l >> r;
        long long len = abs(r-l)+1;
        long long arr2[len];
        if(r<l){
            long long t;
            t = r;
            r = l;
            l = t;
        }
        for(long long j=0,in=l-1; j<len; j++,in++)
            arr2[j] = arr[in];

        sort(arr2, arr2+len);
        if(len < 3){
            cout << arr2[len-1] - arr2[0] << endl;
            continue;
        }
        cout << arr2[len-1]+arr2[len-2] - arr2[0] - arr2[1] << endl;
    }

    return 0;
}
