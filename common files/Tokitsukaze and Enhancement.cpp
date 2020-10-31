#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    int t = 3, a=0, b=0, c=0, d=0;

    for(int i=0; i<3; i++){
        if((x+i) % 4 == 1){
            cout << i << ' ' << 'A';
            return 0;
        }
    }

    for(int i=0; i<3; i++){
        if((x+i) % 4 == 3){
            cout << i << ' ' << 'B';
            return 0;
        }
    }

    for(int i=0; i<3; i++){
        if((x+i) % 4 == 2){
            cout << i << ' ' << 'C';
            return 0;
        }
    }

    for(int i=0; i<3; i++){
        if((x+i) % 4 == 0){
            cout << i << ' ' << 'D';
            return 0;
        }
    }

    return 0;
}
