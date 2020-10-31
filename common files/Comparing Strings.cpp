#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x,y;
    cin>>x>>y;

    if(x.length()==y.length()){
        int l=x.length(), s=0;
        vector<int> p;
        for(int i=0; i<l; i++){
            if(x[i]!=y[i]){
               s++;
               p.push_back(i);
            }
        }
        if(s==2){
            if(x[p[0]]==y[p[1]] && x[p[1]]==y[p[0]])
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";

    return 0;
}
