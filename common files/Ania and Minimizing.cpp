#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if(k == 0){
        cout << s;
        return 0;
    }

    if(s.length() == 1){
        cout << 0;
        return 0;
    }

    if(s[0] != '1'){
        s[0] = '1';
        k--;
    }

    for(int i=0, j=1; i<k && j<n; i++){
        while(s[j] == '0' && j<n){
            j++;
        }

        if(j < n){
            s[j] = '0';
        }

        else
            break;
    }

    cout << s;

    return 0;
}
