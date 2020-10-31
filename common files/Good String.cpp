#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    int n;
    string s;

    while(t--){
        cin>>n >>s;

        int i=0, j=n-1, le=0;
        while(s[i]!='>' && i<n){
            i++;
        }

        while(s[j]!='<' && j>-1){
            le++;
            j--;
        }
        cout<<min(i, le)<<endl;
    }

    return 0;
}
