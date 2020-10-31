#include <bits/stdc++.h>
using namespace std;

int getsum(int bittree[], int in){
    int s=0;

    in++;

    while(in>0){
        s+=bittree[in];

        in-=in & (-in);
    }

    return s;
}

void update(int bittree[], int n, int i, int val){
    i=i+1;

    while(i<=n){
        bittree[i]+=val;

        i+=i&(-i);
    }
}

int *constbittree(int arr[], int n){

    int *bittree=new int [n+1];
    for(int i=1; i<=n; i++)
        bittree[i]=0;

    for(int i=0; i<n; i++)
        update(bittree, n, i, arr[i]);

    return bittree;
}

int main ()
{
    int t, n, q;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){///test cases
        scanf("%d %d", &n, &q);

        int arr[n];
        for(int j=0; j<n; j++)
            scanf("%d",&arr[j]);

        int *bittree=constbittree(arr, n);
        printf("Case %d:\n",i);

        while(q--){
            int a, b, c;
            scanf("%d", &a);
            if(a==1){
                int sub;
                scanf("%d", &sub);
                int l=arr[sub];
                arr[b]=0;
                printf("%d\n",l);
                update(bittree, n, sub, (-1)*l);
            }
            else if(a==2){
                scanf("%d %d", &b, &c);
                arr[b]+=c;
                update(bittree, n, b, c);

//                ///show tree
//                for(int m=1; m<=n; m++)
//                    printf("%d\t", bittree[m]);
            }
            else{
                scanf("%d %d", &b, &c);
                int p1=getsum(bittree, c);
                int p2=getsum(bittree, b-1);
                printf("%d\n", p1-p2);
            }
        }
    }

    return 0;
}
