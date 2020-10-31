#include <bits/stdc++.h>
using namespace std;
main ()
{
    stack <string> s;
    s.push("Nabil");
    s.push("Anuyu");
    s.push("huyti");
    s.push("ghfyj");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
