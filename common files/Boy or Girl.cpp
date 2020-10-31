#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    int l=x.length();
    set < char > s;
    while(l--)
        s.insert(x[l]);
    if(s.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
