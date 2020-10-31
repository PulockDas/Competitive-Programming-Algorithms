#include <bits/stdc++.h>
using namespace std;

bool check(string s, string t){

    if(s.length() != t.length())
        return false;

    int vul = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] != t[i])
            vul++;
    }

    if(vul>1)
        return false;
    return true;
}

int main ()
{
    int n;
    cin >> n;
    string s;

    while(n--){
        cin >> s;
        if(check(s, "violet"))
            cout << "violet";
        else if(check(s, "indigo"))
            cout << "indigo";
        else if(check(s, "blue"))
            cout << "blue";
        else if(check(s, "green"))
            cout << "green";
        else if(check(s, "yellow"))
            cout << "yellow";
        else if(check(s, "orange"))
            cout << "orange";
        else
            cout << "red";

        cout << endl;

    }

    return 0;
}
