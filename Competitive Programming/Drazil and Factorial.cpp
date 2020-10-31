#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector <char> ansprev;

    for(int i=0; i<n; i++){
        if(s[i]=='4'){
            ansprev.push_back('3');
            ansprev.push_back('2');
            ansprev.push_back('2');
        }

        else if(s[i] == '6'){
            ansprev.push_back('3');
            ansprev.push_back('5');
        }

        else if(s[i] == '8'){
            ansprev.push_back('7');
            ansprev.push_back('2');
            ansprev.push_back('2');
            ansprev.push_back('2');
        }
        
        else if(s[i] == '9'){
            ansprev.push_back('7');
            ansprev.push_back('3');
            ansprev.push_back('3');
            ansprev.push_back('2');
        }

        else if(s[i]!= '1'&& s[i]!='0'){
            ansprev.push_back(s[i]);
        }
    }

    sort(ansprev.begin(), ansprev.end(), greater<int>()); 

    for(int i=0; i<ansprev.size(); i++)
        cout << ansprev[i];
    cout << endl;


    return 0;
}