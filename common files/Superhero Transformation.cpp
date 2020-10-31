#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s,t;
    cin>>s>>t;
    int ls=s.length(),lt=t.length();
    if(ls==lt){
        while(ls--){
            if(s[ls]=='a' || s[ls]=='e' || s[ls]=='i' || s[ls]=='o' || s[ls]=='u'){
                if(!(t[ls]=='a' || t[ls]=='e' || t[ls]=='i' || t[ls]=='o' || t[ls]=='u')){
                    cout<<"NO";
                    break;
                }
            }

            if(!(s[ls]=='a' || s[ls]=='e' || s[ls]=='i' || s[ls]=='o' || s[ls]=='u')){
                if(t[ls]=='a' || t[ls]=='e' || t[ls]=='i' || t[ls]=='o' || t[ls]=='u'){
                    cout<<"NO";
                    break;
                }
            }

        }
        if(ls==-1)
            cout<<"YES";
    }
    else
        cout<<"No";

    return 0;
}
