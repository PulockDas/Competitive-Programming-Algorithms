#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    string x;
    stack <char> start;
    char top;
    while(t--){
        cin>>x;
        int len=x.length();
        int i;
        for(i=0; i<len; i++){
            if(x[i]=='(' || x[i]=='[')
                start.push(x[i]);
            else{
                if(!start.empty()){
                    top=start.top();
                    //start.pop();
                    if((top=='(' && x[i]==')') || (top=='[' && x[i]==']'))
                        start.pop();
                }
                else
                    break;
            }
        }
        if(start.empty() && i==len)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        while(!start.empty())
            start.pop();
    }

    return 0;
}
