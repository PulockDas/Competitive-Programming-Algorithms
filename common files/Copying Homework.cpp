#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int num = n;
    while(num--){
        int in;
        cin >> in;

        if(in != n)
            cout << ++in<< " ";

        else cout << 1<<" ";
    }

    return 0;
}
