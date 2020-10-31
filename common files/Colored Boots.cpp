#include <bits/stdc++.h>
using namespace std;
const int A = 26;

int main ()
{
    int n;
    cin>>n;
    string l;
    cin>>l;
    vector <int > lq;
    vector <vector<int> > lvec(A);

    for(int i=0; i<n; i++){
        if(l[i]!='?')
            lvec[l[i]-'a'].push_back(i);

        else
            lq.push_back(i);
    }

    string r;
    cin>>r;
    vector <int > rq;
    vector <vector<int> > rvec(A);

    for(int i=0; i<n; i++){
        if(r[i]!='?')
            rvec[r[i]-'a'].push_back(i);

        else
            rq.push_back(i);
    }
    vector < pair<int, int> > ans;
    vector < int > cl(A), cr(A);

    for(int i=0; i<A; i++){
        for(int j=0; j<min(rvec[i].size(), lvec[i].size()); j++){
            ans.push_back(make_pair(lvec[i][j]+1, rvec[i][j]+1));
            cl[i]= cr[i]= min(rvec.size(), lvec.size());
        }
    }

    for(int i=0; i<A; i++){
        while(cl[i] < lvec[i].size() && !rq.empty()){
            ans.push_back(make_pair(lvec[i][cl[i]]+1, rq[rq.size()-1]+1));
            rq.pop_back();
            cl[i]++;
        }

    }

    for(int i=0; i<A; i++){
        while(cr[i] < rvec[i].size() && !lq.empty()){
            ans.push_back(make_pair(lq[lq.size()-1]+1, rvec[i][cr[i]]+1));
            lq.pop_back();
            cr[i]++;
        }
    }

    for(int i=0; i<min(lq.size(), rq.size()); i++)
        ans.push_back(make_pair(lq[i]+1, rq[i]+1));


    int len=ans.size();
    cout<<len<<endl;
    for(int i=0; i<len; i++)
        cout<<ans[i].first<<' '<<ans[i].second<<endl;

    return 0;
}
