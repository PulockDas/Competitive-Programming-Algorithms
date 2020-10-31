#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        double l, w;
        cin >> l>> w;

        double a1 = (4*(l+w) + sqrt(4*(l+w)*4*(l+w) - 4*12*l*w)) / (2*12);
        double a2 = (4*(l+w) - sqrt(4*(l+w)*4*(l+w) - 4*12*l*w)) / (2*12);

        //cout << a1 << " "<<a2<<endl;

        if(a1 > 0 && a2 > 0)
            a1 = min(a1, a2);

        else
            a1 = (a1 > 0)? a1:a2;

        //cout << a1 << endl;

        cout <<"Case "<<i<<": ";
        printf("%.6lf\n", a1*(l-2*a1)*(w-2*a1));

    }

    return 0;
}
