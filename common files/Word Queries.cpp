#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, q;
    cin>>n >>q;
    string arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    string x;

    vector <int> v;
    while(q--){
        cin>>x;
        int l=x.length();

        int s=0;
        for(int j=0; j<n; j++){
            int i;
            for(i=0; i<l; i++){
                if(x[i]!=arr[j][i])
                    break;
            }
            if(i==l)
                s++;
        }
        v.push_back(s);
    }
    for(int k=0; k<v.size(); k++)
        cout<<v[k]<<endl;

    return 0;
}
