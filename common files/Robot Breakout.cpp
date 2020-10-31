#include <bits/stdc++.h>
using namespace std;

int main (){
    int q;
    cin >> q;

    int n;

    while(q--){
        cin >> n;

        bool left, right, up, down;

        int x, y, f1, f2, f3, f4;
        cin >> x >> y >> f1 >> f2 >> f3 >> f4;
        int ansx = x, ansy = y;
        if(f1 == 1) left = true; else left = false;
        if(f3 == 1) right = true; else right = false;
        if(f2 == 1) up = true; else up = false;
        if(f4 == 1) down = true; else down = false;

        bool ch = false;

        for(int i=1; i<n; i++){
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;

            if(x < ansx){
                if(left)
                    ansx = x;
                else if(f3 == 0){
                    cout << 0 << endl;
                    ch = true;
                    goto here;
                }
                else right = true;
            }

            else if(x > ansx){
                if(right)
                    ansx = x;
                else if(f1 == 0){
                    cout << 0 << endl;
                    ch = true;
                    goto here;

                }
                else left = true;
            }

            if(y < ansy){
                if(down)
                    ansy = y;
                else if(f2 == 0){
                    cout << 0 << endl;
                    ch = true;
                    goto here;
                }
                else up = true;
            }

            else if(y > ansy){
                if(up)
                    ansy = y;
                else if(f4 == 0){
                    cout << 0 << endl;
                    ch = true;
                    goto here;
                }
                else down = true;
            }

            here:
            if(f1 == 1) left = true; else left = false;
            if(f3 == 1) right = true; else right = false;
            if(f2 == 1) up = true; else up = false;
            if(f4 == 1) down = true; else down = false;

        }

        if(!ch)
            cout << 1 <<' '<< ansx <<' '<< ansy <<endl;

    }

    return 0;
}
