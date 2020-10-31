#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string name, dis;
        cin >> name >> dis;

        while(3--){
            string a, b;
            cin >> a >> b;

            if(a == b){
                cout << a << " means " << b <<endl;
                cout << b << " means " << a <<endl;
                continue;
            }

            if(a == "Durjoy" && b == "Foga"){
                cout << "Durjoy means Foga" << endl;
                cout << "Foga doesnt mean Durjoy" << endl;
                continue;
            }

            if(a == "Foga" && b == "Vxd"){
                cout << "Foga means Vxd" << endl;
                cout << "Vxd doesnt mean Foga" << endl;
                continue;
            }

            if(a == "Foga")


        }




    }




    return 0;
}
