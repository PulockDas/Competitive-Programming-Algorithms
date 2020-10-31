#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    int n;

    cin >> q;

    while(q--){
        cin >> n;

        int in, sum = 0;

        for(int i=0; i<n; i++){
            cin >> in;
            sum += in;
        }

        sum = (sum % n == 0) ? sum/n : sum/n+1;

        cout << sum << endl;

    }

    return 0;
}
