#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        string s[n];

        int ones[n], zeros[n];
        memset(ones, 0, sizeof(ones));
        memset(zeros, 0, sizeof(zeros));

        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<s[i].length(); j++){
                if(s[i][j] == '1') ones[i]++;
                else zeros[i]++;
            }
            //cout << ones[i]<< " "<<zeros[i]<<endl;
        }



        int jor2 = 0, bijor2 = 0, jorbijor = 0;

        for(int i=0; i<n; i++){
            if(ones[i] % 2 == 0){
                if(zeros[i] % 2 == 0)
                    jor2++;
                else jorbijor++;
            }

            else{
                if(zeros[i] % 2 == 1)
                    bijor2++;
                else jorbijor++;
            }
        }

        //cout << jor2 <<" "<< bijor2 <<" "<< jorbijor<<endl;

        if(bijor2 == n)
            cout << n-1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}
