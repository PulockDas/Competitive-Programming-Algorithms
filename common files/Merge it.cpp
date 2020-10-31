#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        int in, c0=0, c1=0, c2=0;
        for(int i=0; i<n; i++){
            cin >> in;
            in %= 3;
            if(in == 0)
                c0++;
            else if(in == 1)
                c1++;
            else
                c2++;
        }

        if(c1 > c2)
            cout << c0+c2+(c1-c2)/3 << endl;

        else
            cout << c0+c1+(c2-c1)/3 <<endl;

    }

    return 0;
}
