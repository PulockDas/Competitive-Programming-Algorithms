#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string t;
    cin >> t;

    string first = t;
    first.erase(remove(first.begin(), first.end(), 'a'), first.end());

    int l =first.length();

    if(l%2 != 0){
        cout << ":(";
        return 0;
    }

    string second = first.substr(l/2, l/2);
    first = first.substr(0, l/2);

    if(first != second){
        cout << ":(";
        return 0;
    }

    int lent = t.length(), lens = second.length();
    lens = lent-lens-1;

    for(int i=lent-1; i>lens; i--){
        if(t[i] == 'a'){
            cout << ":(";
            return 0;
        }
    }

    cout << t.substr(0, lent-second.length());

    return 0;
}
