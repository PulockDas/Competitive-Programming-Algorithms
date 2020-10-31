#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k;
    cin >> k;

    baire:
    while(k--){
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int arr[26];
        memset(arr, 0, sizeof(arr));

        vector<int > vec;
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){
                vec.push_back(i);
            }

            int num = s[i]-'a';
            arr[num]++;
            num = t[i]-'a';
            arr[num]++;
        }

        for(int i=0; i<26; i++){
            if(arr[i]%2 == 1){
                cout << "NO" <<endl;
                goto baire;
            }
        }

        cout << "YES"<<endl;

        for(int i=0; i<vec.size(); i++){


        }

    }







    return 0;
}
