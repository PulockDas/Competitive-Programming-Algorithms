#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int bun, patty, cutlet;
        cin >> bun >> patty >> cutlet;

        int h, c;
        cin >> h >> c;

        bun /= 2;

        int ans = 0;
        for(int i=0; i<=patty; i++){
            int m;
            if(i >= bun){
                m = bun * h;
            }

            else{
                m = i * h + min((bun-i), cutlet) * c;
            }

            ans = max(ans, m);
        }

        cout << ans << endl;
    }

    return 0;
}
