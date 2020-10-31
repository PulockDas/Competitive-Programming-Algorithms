#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,t,k;
    cin>>n>>m;
    vector<vector <int> >vec[n];
    for(int i=0;i<n;i++){
        vec.push_back(i);
        cin>>t;
        if(t==0)
        {
            vec[i].push_back(t);
            cin>>k;
            vec[i].push_back(k);
        }
        else if(t==1)
        {
            vec[i].push_back(t);
            cin>>k;
            vec[i].push_back(k);
        }
        else
        {
            vec[i].push_back(t);
            cin>>k;
            vec[i].push_back(k);
            cin>>k;
            vec[i].push_back(k);
        }
    }



    return 0;
}
