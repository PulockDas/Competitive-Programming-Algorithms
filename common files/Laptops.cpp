#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,t=0;
    cin>>n;
    pair <int, int> p;
    priority_queue<pair <int, int> > pq;

    int cost, quality;

    for(int i=0; i<n; i++){
        cin>>cost>>quality;
        p=make_pair(cost, quality);
        pq.push(p);
    }

    pair <int, int> top;

    top=pq.top();

    pq.pop();

    while(!pq.empty()){
        int com=pq.top().second;

        if(com<top.second){
            top=pq.top();
            pq.pop();
        }

        else{
            t=1;
            break;
        }
    }

    if(t==1)
        cout<<"Happy Alex";

    else
        cout<<"Poor Alex";

    return 0;
}
