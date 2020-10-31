#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int jor = 0, bijor = 0;

    int input;

    while(n--){
        cin >> input;
        if(input % 2 == 0) jor++;
        else bijor++;
    }

    cout << min(jor, bijor);

}
