#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int enter[n], exit[n];

    for(int i=0; i<n; i++)
        cin >> enter[i];

    for(int i=0; i<n; i++)
        cin >> exit[i];

    int exited[n+1];
    memset(exited, 0, sizeof(exited));

    int sum = 0;

    for(int i=0, j=0; i<n && j<n; ){

        if(exited[enter[i]]){
            i++;
            continue;
        }

        if(enter[i] == exit[j]){
            i++;
            exited[exit[j]] = 1;
            j++;
            continue;
        }

        sum++;
        exited[exit[j]] = 1;
        j++;
    }

    cout << sum;

    return 0;
}
