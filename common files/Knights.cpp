#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int b = 1;
    for(int i=0; i<n; i++){
        if(b==1) b=0;
        else b = 1;

        int rb = b;
        for(int j=0; j<n; j++){
            if(rb == 1){
                cout << "B";
                rb = 0;
            }

            else{
                cout << "W";
                rb = 1;
            }
        }

        cout << endl;
    }

    return 0;
}
