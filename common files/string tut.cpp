#include <bits/stdc++.h>
using namespace std;
main ()
{
    string x;
    string y;
    getline(cin, x);
    for(int i=0;i<x.length();i++)
        cout<<x.at(i)<<endl;
    y=x.substr(5,8);
    cout<<y<<endl;
    cout<<x.find("m");
}
