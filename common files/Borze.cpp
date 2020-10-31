#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string c;
    vector<char>ans;
    int i=0;
    cin>>c;
    int l=c.size();
    for( ; i<l; ){
        if(c[i]=='.'){
            ans.push_back('0');
            i++;
        }
        else if(c[i]=='-'){
            if(c[i+1]=='.')
                ans.push_back('1');
            else
                ans.push_back('2');
            i+=2;
        }
    }
    l=ans.size();
    for(i=0; i<l; i++)
        cout<<ans[i];

    return 0;
}
