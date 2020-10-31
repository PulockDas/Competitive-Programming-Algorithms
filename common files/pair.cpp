#include<bits/stdc++.h>
using namespace std;
main ()
{
    vector< pair<string, int> >v;
    v.push_back(make_pair("Amartya",420));
    v.push_back(make_pair("Himal",420));
    v.push_back(make_pair("Anu",420));
    v.push_back(make_pair("Kamol",420));
    vector< pair<string, int> >::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


}
