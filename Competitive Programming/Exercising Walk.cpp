#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll left, right, down, up;
        cin >> left >> right >> down >> up;

        ll x, y, x1, y1, x2, y2;
        cin >> x>> y>> x1>> y1>> x2>> y2;

        ll limitx = abs(x1-x2);
        ll limity = abs(y1-y2);

        bool checker = true;

        if(limitx == 0){
            if(!(left == 0 && right == 0)){
                checker = false;
            }
        }
        
        if(limity == 0){
            if(!(up == 0 && down == 0)){
                checker = false;
            }
        }

        if(checker){
            // ll difx = abs(left-right);
            // ll dify = abs(down-up);

            if(left > right){
                ll koto_boro = left-right;
                if(x-koto_boro < x1)
                    checker = false;
            }
            else if(right > left){
                ll koto_boro = right-left;
                if(x+koto_boro > x2)
                    checker = false;
            }

            if(down > up){
                ll koto_boro = down-up;
                if(y-koto_boro < y1)
                    checker = false;
            }
            else if(up > down){
                ll koto_boro = up - down;
                if(y+koto_boro > y2)
                    checker = false;
            }
        }

        if(checker){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    
    return 0;
}