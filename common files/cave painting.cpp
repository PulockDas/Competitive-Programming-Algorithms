#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i,j;
    map < int, int> mp;
    cin >> n >> k;
    if((n%2 == 0 && k != 1) || (k >=n && k!=1 && n!= 1))
    {
        cout << "NO" << endl;
        return 0;
    }
    for(i=1;i<=k;i++)
    {
        if(mp[n%i] != 1)
            mp[n%i] =1;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
