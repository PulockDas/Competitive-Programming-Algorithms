#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        map <int, int> m;

        int j=1;
        while(j<=n){
            m[j] = 0;
            j++;
        }

        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++){
            int jabo = i+1;

            if(m[jabo]){
                cout << m[jabo] << " ";
                continue;
            }

            vector <int > vec;
            vec.push_back(jabo);

            int in = arr[i];
            while(in != jabo){
                vec.push_back(in);
                in = arr[in-1];
            }

            int l = vec.size();

            for(int k=0; k<l; k++){
                m[vec[k]] = l;
            }

            cout << l << " ";

        }

        cout << endl;
    }

    return 0;
}
