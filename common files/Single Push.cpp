#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    br:
    while(t--){
        int n;
        cin >> n;

        int a[n], b[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int ch = 0, c;
        int m = 0;

        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                cout << "NO"<<endl;
                goto br;
            }

            if(a[i]<b[i]){
                if(m>1){
                   cout << "NO"<<endl;
                    goto br;
                }
                m = 1;
                c = b[i]-a[i];

                if(ch == 0) ch = c;

                else if(ch != c){
                    cout << "NO"<<endl;
                    goto br;
                }
            }

            else if(m == 1)
                m++;

            //cout << i<<endl;
        }

        cout << "YES\n";

    }

    return 0;
}
