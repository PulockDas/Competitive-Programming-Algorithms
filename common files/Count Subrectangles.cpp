#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll row[n], column[m];

    for(ll i=0; i<n; i++) cin >> row[i];

    for(ll i=0; i<m; i++) cin >> column[i];

    ll mat[n][m];

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
            mat[i][j] = row[i]*column[j];
    }

    ll total = 0;

    ///row operation
    if(k<=m)
    {

        for(ll i=0; i<n; i++)
        {
            vector<ll>count;
            ll j = 0, gona = 0;

here2:
            while(mat[i][j] == 0)
            {
                j++;
            }

            for(; j<m; j++)
            {
                if(mat[i][j] == 1)
                    gona++;
                else
                {
                    if(gona >= k)
                        count.push_back(gona);
                    gona = 0;
                    goto here2;
                }

                if(j==m-1 && mat[i][j]==1)
                {
                    if(gona >= k)
                        count.push_back(gona);
                    break;
                }
            }

            for(ll p=0; p<count.size(); p++)
            {
                total += count[p]-k+1;
            }
        }
    }

    ///column operation
    if(k<=n)
    {
        cout << total<<endl;
        for(ll i=0; i<m; i++)
        {
            vector<ll>count;
            ll j = 0, gona = 0;

here:
            while(mat[j][i] == 0)
            {
                j++;
            }

            for(; j<n; j++)
            {
                if(mat[j][i] == 1)
                    gona++;
                else
                {
                    if(gona >= k)
                        count.push_back(gona);
                    gona = 0;
                    goto here;
                }

                if(j==n-1 && mat[j][i]==1)
                {
                    if(gona >= k)
                        count.push_back(gona);
                    gona = 0;
                    goto here;
                }
            }

            for(ll p=0; p<count.size(); p++)
            {
                total += count[p]-k+1;
            }
        }
    }

    ///next steps


    cout <<total;



    return 0;
}
