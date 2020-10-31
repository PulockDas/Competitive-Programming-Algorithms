#include <bits/stdc++.h>
using namespace std;
int put[3];

int main ()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; i++){
            int a;
            scanf("%d", &a);
            arr[i]=a%3;
            put[arr[i]++];
        }

        char ch='a';
        if(put[1]==0 && put[2]==0)
            printf("Bob\n");

        else if(put[1]!=0){
            put[1]--;
            if(put[0]%2==0)
                ch='a';
            else
                ch='b'

            if(put[1]<=put[2]){
                if(ch=='a')
                    printf("Alice\n");
                else
                    printf("Bob\n");
            }

            else{
                put[1]-=put[2];
                put[2]-=put[2];



            }
        }
    }




    return 0;
}
