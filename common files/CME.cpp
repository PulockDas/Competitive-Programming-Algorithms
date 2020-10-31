#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        if(n == 2){
            cout << 2 << endl;
            continue;
        }

        int lagbe = (n+1)/2;
        lagbe *= 2;

        cout << lagbe - n <<endl;
    }

    return 0;
}
