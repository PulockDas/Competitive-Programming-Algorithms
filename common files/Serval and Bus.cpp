#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, t;
    cin >> n >> t;

    int arrive, interval;
    int route[n][2];

    for(int i=0; i<n; i++){

        cin >> route[i][0] >> route[i][1];

        if(route[i][0] < t){

            int m = t - route[i][0];
            int q = m / route[i][1];
            int num = q * route[i][1];

            if(num != m)
                route[i][0] += num + route[i][1];
            else
                route[i][0] += num;
        }
    }

    int mini = 0;
    for(int i=1; i<n; i++){
        if(route[i][0] < route[mini][0])
            mini = i;
    }

    cout << mini+1;

    return 0;
}
