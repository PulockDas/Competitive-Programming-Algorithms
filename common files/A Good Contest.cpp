#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    string s;
    int before, after;

    int ch = 0;
    while(n--){
        cin >> s >> before >> after;
        if(ch == 0){
            if(before>=2400){
                if(before<after)
                    ch = 1;
            }
        }
    }

    if(ch == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
