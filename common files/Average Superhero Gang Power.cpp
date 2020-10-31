#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    double k, m;
    cin >> n >> k >> m;

    double arr[n], s=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i];
    }

    double nc = (double)n;

    sort(arr, arr+n);

    double ans;

    int i;
    double avg;
    for(i=0; i<n; i++){
        avg = s / nc;

        if(arr[i] < avg && m != 0){


            s -= arr[i];
            nc--;
            m--;
        }
        else
            break;
    }

    if(m == 0)
        cout << fixed << setprecision(7) << avg;

    else{
        int len = n - i;

        while(m > k && len > 0){
            s += k;
            m -= k;
            len--;
        }

        if(len > 0)
            s += m;

        avg = s / nc;
        cout << fixed << setprecision(7) << avg;
    }

    return 0;
}
