#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map <int, int> ch;

    int ans = n-1;

    for(int i=0; i<n; i++){
        bool valid_prefix = true;

        for(int j=0; j<i; j++){
            ch[arr[j]]++;

            if(ch[arr[j]] == 2){
                valid_prefix = false;
                break;
            }
        }

        int min_in_suffix = n;

        for(int j=n-1; j>=i; j--){
            ch[arr[j]]++;

            if(ch[arr[j]] == 1) min_in_suffix = j;
            else break;
        }

        if(valid_prefix){
            ans = min(ans, min_in_suffix - i);
        }

        ch.clear();

    }

    cout << ans;

    return 0;
}
