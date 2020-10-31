#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    vector <int > m;
    int sum = 0;

    for(int i=0; i<10; i++){
        sum += pow(3, i);
        m.push_back(sum);
    }

    while(q--){
        int n;
        cin >> n;

        int man;
        for(int i=0; i<10; i++){
            if(n <= m[i]){
                man = i;
                break;
            }
        }

        cout << man << endl;

        if(n == m[man]){
            cout << n <<endl;
            continue;
        }

        int suru = pow(3, man);

        int b = 0;
        while(n > suru){
            suru += pow(3, b);
            b++;
        }

        cout << suru << endl;

    }

    return 0;
}
