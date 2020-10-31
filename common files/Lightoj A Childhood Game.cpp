#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int n;
        string name;

        cin >> n >> name;

        if(name == "Alice"){
            if((n-1)%3 == 0)
                cout << "Case "<<i<<": Bob\n";

            else
                cout << "Case "<<i<<": Alice\n";
        }

        else{
            if(n%3 == 0)
                cout << "Case "<<i<<": Alice\n";
            else
                cout << "Case "<<i<<": Bob\n";
        }
    }

    return 0;
}
