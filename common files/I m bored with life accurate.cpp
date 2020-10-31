#include <bits/stdc++.h>
using namespace std;

void fact(int x){
    int num = 1;

    for(int i=2; i<=x; i++)
        num *= i;

    cout << num;
}

int main ()
{
    int a, b;
    cin >> a >> b;

    int m = min(a, b);

    fact(m);

    return 0;
}

