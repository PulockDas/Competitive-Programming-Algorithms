#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int height[n];

    typedef pair <int, int> hud;
    hud p;
    priority_queue <hud> pq;

    for(int i=0; i<n; i++){
        cin>>height[i];
        p=make_pair(height[i], i);
        pq.push(p);
    }

    hud top;
    top=pq.top();
    pq.pop();

    for(int i=0; i<n-1; ){
        if(top.first>=height[i]){
            if(top.second>i){
                height[i]=top.first-height[i]+1;
                i++;
            }
            else if(top.second==i){
                height[i]=0;
                i++;
            }
            else{
                top=pq.top();
                pq.pop();
            }
        }
    }

    height[n-1]=0;

    for(int i=0; i<n; i++)
        cout<<height[i]<<" ";

    return 0;
}
