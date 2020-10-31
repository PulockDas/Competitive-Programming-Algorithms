#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    suru:
    while(t--){
        int n;
        cin >> n;
        n *= 2;

        int arr[n], ch[n+1];
        memset(ch, 0, sizeof(ch));

        for(int i=0; i<n; i+= 2){
            cin >> arr[i];
            ch[arr[i]] = 1;
        }

        for(int i=1; i<n; i+=2){
            int next = arr[i-1]+1;

            while(ch[next]){
                next++;
            }

            if(next <= n){
                ch[next] = 1;
                arr[i] = next;
            }

            else{
                cout << -1<<endl;
                goto suru;
            }
        }

        for(int i=0; i<n; i++)
            cout << arr[i]<<" ";
        cout << endl;
    }

    return 0;
}
