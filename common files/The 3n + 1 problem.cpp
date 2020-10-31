#include <bits/stdc++.h>
using namespace std;

int isPowerOfTwo (int x)
{
  return ((x != 0) && ((x & (~x + 1)) == x));
}

int main ()
{
    int i, j;

    while(cin >> i >> j){

        cout << i << ' ' << j <<' ';

        if(i>j){
            int l = i;
            i = j;
            j = l;
        }

        int ans = 0;

        for( ; i<=j; i++){
            int s = 1;
            if(!isPowerOfTwo(i)){

                int k = i;
                while(!isPowerOfTwo(k)){
                    if(k % 2 == 0){
                        k /= 2;
                        s++;
                    }

                    else{
                        k = 3*k + 1;
                        s++;
                    }

                }

                s += log2(k);
            }

            else{
                s += log2(i);
            }

            ans = max(ans, s);

        }

        cout << ans << endl;
    }

    return 0;
}
