#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    suru:
    while(q--){
        int n;
        cin >> n;

        string s1, s2;

        cin >> s1 >> s2;

        int up = 1, down = 0;

        for(int i=0; i<n; i++){

            if(up == 1 && s1[i] != '1' && s1[i] != '2'){
                if(s2[i] == '1' || s2[i] == '2'){
                    cout << "NO" << endl;
                    goto suru;
                }

                up = 0;
                down = 1;
            }

            else if(down == 1 && s2[i] != '1' && s2[i] != '2'){
                if(s1[i] == '1' || s1[i] == '2'){
                    cout << "NO" << endl;
                    goto suru;
                }

                up = 1;
                down = 0;
            }
        }

        if(down == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
