#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s[0] == '1' || s[n-1] == '1'){
            cout << 2*n <<endl;
            continue;
        }

        int one = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1') one++;
        }

        if(one == 0){
            cout << n << endl;
            continue;
        }

        int sum = n+one;

        int i,j;
        for(i=0,j=n-1; i<n||j>-1;){
            if(s[i] == '1' && s[j] == '1')
                break;
            else if(s[i] == '1' && s[j] == '0')
                j--;
            else if(s[i] == '0' && s[j] == '1')
                i++;
            else{
                i++, j--;
            }
        }

        if(s[i] == '1') sum = max(sum, 2*(n-i));
        if(s[j] == '1') sum = max(sum, 2*(j+1));

        cout << sum << endl;

    }

    return 0;
}
