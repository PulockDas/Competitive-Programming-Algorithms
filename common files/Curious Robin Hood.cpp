#include <bits/stdc++.h>
using namespace std;

int getsum(int bittree[], int in){
    in++;
    int sum=0;

    while(in>0){
        sum+=bittree[in];

        in-=in & (-in);
    }

    return sum;
}

void update(int bittree[], int in, int n, int val){
    in++;

    while(in<=n){
        bittree[in]+=val;

        in+=in & (-in);
    }
}

void revupdate(int bittree[], int in, int n, int val){
    in++;

    while(in<=n){
        bittree[in]-=val;

        in+=in & (-in);
    }
}
int *constructbit(int arr[], int n){

    int *bittree=new int[n+1];
    for(int i=0; i<=n; i++)
        bittree[i]=0;

    for(int j=0; j<n; j++)
        update(bittree, j, n, arr[j]);

    return bittree;
}

int main ()
{
    int t;
    scanf("%d", &t);

    int n, q;
    for(int i=1; i<=t; i++){///test cases
        scanf("%d %d", &n, &q);
        int arr[n];

        for(int j=0; j<n; j++)///initial array
            scanf("%d", &arr[j]);

        ///making of bittree

        int *bittree=constructbit(arr, n);

        printf("Case %d:\n",i);
        while(q--){
            int a;
            scanf("%d", &a);

            if(a==1){
                int b;
                scanf("%d", &b);
                printf("%d\n", arr[b]);
                int val=arr[b];
                arr[b]=0;
                revupdate(bittree, b, n, val);
            }

            else if(a==2){
                int b, c;
                scanf("%d %d", &b, &c);
                arr[b]+=c;
                update(bittree, b, n, c);
            }

            else{
                int b, c;
                scanf("%d %d", &b, &c);
                int p1=getsum(bittree, c);
                int p2=getsum(bittree, b-1);
                printf("%d\n",p1-p2);
            }
        }
    }

    return 0;
}
