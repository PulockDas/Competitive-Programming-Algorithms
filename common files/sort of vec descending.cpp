#include<bits/stdc++.h>
using namespace std;
main()
{
    vector <double> v;
    v.push_back(34);
    v.push_back(3);
    v.push_back(67);
    v.push_back(23);
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
