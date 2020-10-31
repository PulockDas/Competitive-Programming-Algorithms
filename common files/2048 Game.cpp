#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        int arr[n];
        map <int, int> m;

        bool ch = false;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 2048)
                ch = true;
            m[arr[i]]++;
        }

        for(int i=0; i<11; i++){
            int num = pow(2, i);
            int k = num * 2;

            m[k] += m[num]/2;
        }

        if(m[2048] != 0) ch = true;

        if(ch) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}
