#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int str, in, exp;
        cin >> str >> in >> exp;

        if(str+exp <= in){
            cout << 0 <<endl;
            continue;
        }

        int dif = str-in-1;

        int b = floor((exp+dif)/2.0);

        if(b > exp)
            cout << exp+1;
        else{
            cout << b+1;
        }
        cout << endl;

    }

    return 0;
}
