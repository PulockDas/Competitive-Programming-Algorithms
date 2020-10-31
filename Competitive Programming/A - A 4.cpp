#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<db, db> pll;

db area(db a1,db b1,db a2,db b2,db a3,db b3){
    db ans = 0.5*(a1*b2-a1*b3-a2*b1+b1*b3+a2*b3-b2*b3);
    ans = abs(ans);

    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n >> q;

    vector <pll> vec;

    for(ll i=0; i<n; i++){
        db x, y;
        cin >> x >> y;

        vec.push_back(make_pair(x, y));
    }

    for(ll i=0; i<q; i++){
        db x, y;
        cin >> x >> y;

        for(ll i=0; i<n; i++){
            if(x == vec[i].first && y == vec[i].second){
                db a1, b1, a2, b2, a3, b3;
                a1 = x, b1 = y;

                if(i+1 < n){
                    a2 = vec[i+1].first;
                    b2 = vec[i+1].second;
                }

                else{
                    a2 = vec[0].first;
                    b2 = vec[0].second;
                }

                if(i+2 < n){
                    a3 = vec[i+2].first;
                    b3 = vec[i+2].second;
                }

                else{
                    ll num = (i+2)%n;
                    a3 = vec[num].first;
                    b3 = vec[num].second;
                }

                db area1 = area(a1, b1, a2, b2, a3, b3);

                if(i-1 > -1){
                    a2 = vec[i-1].first;
                    b2 = vec[i-1].second;
                }

                else{
                    a2 = vec[n-1].first;
                    b2 = vec[n-1].second;
                }

                if(i-2 > -1){
                    a3 = vec[i-2].first;
                    b3 = vec[i-2].second;
                }

                else if(i-2 == -1){
                    a3 = vec[n-1].first;
                    b3 = vec[n-1].second;
                }
                else{
                    a3 = vec[n-2].first;
                    b3 = vec[n-2].second;
                }

                db area2 = area(a1, b1, a2, b2, a3, b3);

                cout << fixed << setprecision(1) << min(area1, area2) <<endl;

                break;
            }
        }
    }

    return 0;
}