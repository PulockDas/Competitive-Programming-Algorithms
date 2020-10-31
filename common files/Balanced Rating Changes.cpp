#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool aminus = true, aplus = true;

    while(n--){
        int x;
        cin >> x;

        if(x % 2 != 0){
            if(x < 0){
                if(aminus){
                    cout << (x-1)/2 << endl;
                    aminus = false;
                }

                else{
                    cout << x/2 << endl;
                    aminus = true;
                }
            }

            else{
                if(aplus){
                    cout << (x+1)/2 << endl;
                    aplus = false;
                }

                else{
                    cout << x/2 << endl;
                    aplus = true;
                }
            }
        }

        else cout << x/2 << endl;
    }

    return 0;
}
