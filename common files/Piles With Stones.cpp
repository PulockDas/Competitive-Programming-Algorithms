#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int s1=0, s2=0, a;
    for(int i=0; i<n; i++){
        cin >> a;
        s1 += a;
    }

    for(int i=0; i<n; i++){
        cin >> a;
        s2 += a;
    }

    if(s1 >= s2)
        cout << "Yes";
    else
        cout<< "No";

    return 0;
}
