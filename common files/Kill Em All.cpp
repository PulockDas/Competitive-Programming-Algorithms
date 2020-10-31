#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while(q--){
        int n, r, x;
        cin >> n >> r;

        int ra = r;
        set <int > s;

        while(n--){
            cin >> x;
            s.insert(x);
        }

        int sum = 0;

        set<int >::reverse_iterator rit;

        for(rit = s.rbegin(); rit != s.rend(); ){
            sum ++;
            rit ++;

            if(*rit - r <= 0)
                break;

            r += ra;
        }

        cout << sum << endl;
    }

    return 0;
}
