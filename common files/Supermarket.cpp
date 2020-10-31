#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double n, m;
    cin>>n >>m;

    double a, b;
    cin>>a >>b;

    double mi=a/b;
    for(int i=1; i<n; i++){
        cin>>a >>b;
        double c=a/b;
        if(mi>c)
            mi=c;
    }

    printf("%0.7lf\n", mi*m);

    return 0;
}
