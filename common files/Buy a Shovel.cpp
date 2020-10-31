#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k, r;
    cin >> k >> r;

    for(int i=1; i<=10; i++){

        int val = k * i;

        if(val % 10 == 0 || val % 10 == r){
            cout << i;
            return 0;
        }
    }
}
