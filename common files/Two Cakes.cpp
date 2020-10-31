#include <bits/stdc++.h>
using namespace std;
int mini(int a, int b, int n){
    int x=abs(n-a);
    int y=abs(n-b);
    if(x<y)
        return a;
    return b;
}

int main ()
{
    int n;
    cin>>n;
    int l=2*n;
    int arr[l];
    pair <int, int> p, top1, top2;
    priority_queue <pair<int, int>> pq;

    for(int i=0; i<l; i++){
        cin>>arr[i];
        p=make_pair(arr[i], i+1);
        pq.push(p);
    }
    int posS=1, posD=1, disS=0, disD=0;

    while(!pq.empty()){
        top1=pq.top();
        pq.pop();
        top2=pq.top();
        pq.pop();
        if(disS==disD){
            disS+=top1.second-posS;
            disD+=top2.second-posD;
            posS=top1.second;
            posD=top2.second;
        }
        else if(disS<disD){
            int min=mini(top1.second,top2.second,posD);

        }




    }







    return 0;
}
