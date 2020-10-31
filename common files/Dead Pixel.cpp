#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int bestarea = 0;

        int area[4];
        area[0] = (a-x-1)*b;
        area[1] = (x-0)*b;
        area[2] = (y-0)*a;
        area[3] = (b-y-1)*a;

        for(int i=0; i<4; i++){
            if(bestarea < area[i])
                bestarea = area[i];
        }

        cout << bestarea <<endl;
    }

    return 0;
}
