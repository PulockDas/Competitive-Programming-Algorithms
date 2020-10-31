#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k;
    cin >> k;

    string s;

    int i = 1;
    while(s.length() <= k){
        int h = i;
        string x;
        while(h != 0){
            int m = h % 10;
            h /= 10;
            char c = (char)(m+48);
            x.push_back(c);
        }
        reverse(x.begin(), x.end());
        s.append(x);
        i++;
    }

    cout << s[k-1] <<endl;

    return 0;
}
