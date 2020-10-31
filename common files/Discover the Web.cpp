#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        cout << "Case "<<i<<":\n";

        string current = "http://www.lightoj.com/";

        stack <string> Backward;
        stack <string> Forward;

        string command, visitcommand;

        here:
        cin >> command;

        if(command == "QUIT"){
            continue;
        }

        if(command == "VISIT"){
            cin >> visitcommand;

            Backward.push(current);
            Forward = stack<string>();
            current = visitcommand;

            cout << current <<endl;
            goto here;
        }

        if(command == "BACK"){
            if(Backward.empty())
                cout<< "Ignored\n";
            else{
                Forward.push(current);
                current = Backward.top();
                Backward.pop();

                cout << current <<endl;
            }
            goto here;
        }

        if(command == "FORWARD"){
            if(Forward.empty())
                cout<< "Ignored\n";

            else{
                Backward.push(current);
                current = Forward.top();
                Forward.pop();

                cout << current <<endl;
            }
            goto here;
        }
    }

    return 0;
}
