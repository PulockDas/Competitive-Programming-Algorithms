#include <bits/stdc++.h>
using namespace std;

string arr[26];

int main ()
{
    int n;
    cin >> n;

    char start, ending;
    cin >> start >> ending;

    while(n--){
        char a, b, c;
        cin >> a >> b >> c;

        arr[c-'a'].push_back(a);
        arr[c-'a'].push_back(b);
    }

    int num;
    cin >> num;

    while(num--){
        string s;
        cin >> s;
        int index = s[0] - 'a';

        if(arr[index][0] == start){
            index = s[s.length()-1] - 'a';
            if(arr[index][1] == ending)
                cout << "CORRECT" << endl;
            else
                cout << "INCORRECT" << endl;
        }

        else
            cout << "INCORRECT" << endl;
    }


    return 0;
}
