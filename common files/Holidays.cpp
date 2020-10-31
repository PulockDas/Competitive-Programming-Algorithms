#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int year;
    cin >> year;

    int week = year / 7;
    int minholi, maxholi;

    minholi = week * 2;
    maxholi = minholi;

    int rem = year % 7;
    if(rem != 0){
        if(rem == 1)
            maxholi += 1;
        else{
            if(rem == 6)
                minholi += 1;

            maxholi += 2;
        }
    }

    cout <<minholi << ' '<<maxholi;

    return 0;
}
