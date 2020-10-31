#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string s;
    while(n--){
        cin >> s;
        sort(s.begin(), s.end());

        int len = s.length();
        char c = s[0];
        int i;
        for(i=1; i<len; i++){
            if(s[i] != (char)(c+1)){
                break;
            }
            else
                c = s[i];
        }

        if(i == len)
            cout << "YES";
        else
            cout << "NO";

        cout<<endl;
    }

    return 0;
}
