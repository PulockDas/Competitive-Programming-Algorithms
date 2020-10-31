#include <bits/stdc++.h>
using namespace std;

#define mx 300001
int tree[mx];

int min(int a, int b){
    if(a<b)
        return a;
    return b;
}

int query(int node, int b, int e, int i, int j){
    if(i>e || j<b)
        return INT_MAX;
    if(b>=i && e<=j)
        return tree[node];
    int mid=(b+e)/2;
    int l=2*node;
    int r=2*node+1;
    int p1=query(l, b, mid, i, j);
    int p2=query(r, mid+1, e, i, j);
    return min(p1, p2);
}

void init(int node, int b, int e, int arr[]){
    if(b==e){
        tree[node]=arr[b];
        return;
    }

    int mid=(b+e)/2;
    int l=node*2, r=node*2+1;

    init(l, b, mid, arr);
    init(r, mid+1, e, arr);

    tree[node]=min(tree[l], tree[r]);
}

int main ()
{
    int T, N, q, a, b;
    scanf("%d", &T);

    for(int i=1; i<=T; i++){///Test case

        //printf("\n");
        scanf("%d %d", &N, &q);

        int arr[N+1];
        for(int j=1; j<=N; j++)
            scanf("%d", &arr[j]);
        init(1, 1, N, arr);

        vector <int> v;
        while(q--){
            scanf("%d %d", &a, &b);
            v.push_back(query(1, 1, N, a, b));
        }
        printf("Case %d:\n", i);
        int l=v.size();
        for(int j=0; j<l; j++)
            printf("%d\n",v[j]);
    }

    return 0;
}
