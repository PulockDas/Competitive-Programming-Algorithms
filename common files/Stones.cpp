#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int sum = 0;

        int c1 = c/2;
        if(b >= c1){
            sum += 3*c1;
            b -= c1;
        }

        else{
            sum += 3*b;
            b = 0;
        }


        c1 = b/2;
        if(a >= c1){
            sum += 3*c1;
            a -= c1;
        }

        else{
            sum += 3*a;
        }

        cout << sum <<endl;

    }

    return 0;
}
