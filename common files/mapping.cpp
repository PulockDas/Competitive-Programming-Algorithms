#include <bits/stdc++.h>
using namespace std;
main ()
{
    map<string, int>m;
    m["Anil"]=34;
    m["Rydu"]=56;
    m["Dev"]=567;
    m["Appu"]=567;
    m.insert(make_pair("Nabil", 41));
    map<string, int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
