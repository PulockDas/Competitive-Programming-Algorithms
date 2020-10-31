#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set <int > s;

    for(int i=0; i<10; i++){
        int num = pow(3, i);

        for(auto elem : s){
            int nu = num+elem;
            s.insert(nu);
        }

        s.insert(num);
    }

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        cout << *(s.lower_bound(n)) << endl;

    }

    return 0;
}

