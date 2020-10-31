#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main ()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int l = s.length();

        if(l==1){
            cout << s <<endl;
            continue;
        }

        int sum = 1;
        for(int i=0; i<l-1; i++){
            if(s[i] == s[i+1]){
                sum++;
            }
            else{
                if(sum % 2 == 1)
                    arr[s[i]-'a'] = sum;
                sum = 1;
            }
        }

        if(s[l-1] != s[l-2]){
            arr[s[l-1]-'a'] = 1;
        }
        else{
            if(sum % 2 == 1)
                arr[s[l-1]-'a'] = sum;
        }


        for(int i=0; i<26; i++){
            if(arr[i])
                cout << (char)(97+i);
        }

        cout << endl;

        memset(arr, 0, sizeof(arr));
    }

    return 0;
}
