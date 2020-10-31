#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int ans = 0;

    while(1){
        if(n%10 == 0){
            n += 10;
            ans += 10;

            while(n % 10 ==0){
                n /= 10;
            }
        }

        else{
            if(n<10){
                ans += 9;
                cout << ans;
                return 0;
            }

            int emni = n;
            n = n + 10 - (n%10);
            ans += n - emni;

            while(n % 10 ==0){
                n /= 10;
            }
        }
    }


    return 0;
}
