#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

struct Node{
    ll number=0;
    ll three=0, five=0, seven=0;
};

Node nodes[3][1001];

void table(){
    ll coins[]={3, 5, 7};


    for(ll i=0; i<3; i++){
        nodes[i][0].number = 1;
    }

    for(ll i=1; i<=1000; i++){
        if(i%3 == 0){
            nodes[0][i].number = 1;
            nodes[0][i].three = i/3;
        }
    }


    for(ll i=1; i<3; i++){
        for(ll j=1; j<=1000; j++){

            if(nodes[i-1][j].number){
                nodes[i][j].number= 1;

                nodes[i][j].three = nodes[i-1][j].three;
                nodes[i][j].five = nodes[i-1][j].five;
                nodes[i][j].seven = nodes[i-1][j].seven;
            }

            else{
                ll num= j-coins[i];

                if(num<0){
                    nodes[i][j].number = nodes[i-1][j].number;

                    if(nodes[i][j].number){
                        nodes[i][j].three = nodes[i-1][j].three;
                        nodes[i][j].five = nodes[i-1][j].five;
                        nodes[i][j].seven = nodes[i-1][j].seven;
                    }
                }

                else{
                    nodes[i][j].number = nodes[i][num].number;
                    if(nodes[i][j].number){

                        if(i==1){
                            nodes[i][j].five = nodes[i][num].five+1;
                            nodes[i][j].seven = nodes[i-1][j].seven;
                        }

                        else{
                            nodes[i][j].seven = nodes[i][num].seven+1;
                            nodes[i][j].five = nodes[i-1][j].five;
                        }

                        nodes[i][j].three = nodes[i][num].three;
                    }
                }
            }
        }
    }
}

void solve(ll test){
    ll n;
    cin >> n;

    if(!nodes[2][n].number){
        cout << -1<<endl;
        return;
    }

    cout << nodes[2][n].three<<' '<<nodes[2][n].five<<' '<<nodes[2][n].seven<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    table();

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}