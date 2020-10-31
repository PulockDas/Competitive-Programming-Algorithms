#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a;
    cin >> a;

    while(1){
        int s=0, n=a;
        while(n != 0){
            s += n%10;
            n -= n%10;
            n /= 10;
        }

        if(s%4 == 0){
            cout << a;
            return 0;
        }

        a++;
    }
}
