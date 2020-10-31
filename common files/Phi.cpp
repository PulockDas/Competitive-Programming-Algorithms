#include <bits/stdc++.h>
using namespace std;

int phi(int n){
    int ret = n;

    for(int i=2; i*i<=n; i++){
        while(n%i == 0)
            n /= i;

        ret -= ret/i;
    }

    if(n > 1)
        ret -= ret/n;

    return ret;

}

int main ()
{
    cout << phi(12);




    return 0;
}
