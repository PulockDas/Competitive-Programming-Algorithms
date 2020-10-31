#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    char arr[10];
    for(int i=1; i<10; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){

        int com = (int)s[i] - 48;

        if(arr[com] > s[i]){

            s[i] = arr[com];

            for(int j=i+1; j<n; j++){

                com = (int)s[j] - 48;

                if(arr[com] >= s[j])
                    s[j] = arr[com];
                else
                    break;
            }

            break;
        }
    }

    cout << s;

    return 0;
}
