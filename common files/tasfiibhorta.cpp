#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int q,p,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>q>>p;
        char arr[p][2*q];

        for(int j=0;j<p;j++)
            for(int k=0;k<2*q;k++)
                cin>>arr[j][k];

        for(int j=1;j<2*q;j=j+2)
        {
            int chk[4]={0,0,0,0};
            for(int k=0;k<p;k++)
            {
                if(arr[k][j]=='T')
                {
                    cout<<arr[k][j-1]<<" ";
                    break;
                }

                else if(arr[k][j-1]== 'A') chk[0]=1;
                else if(arr[k][j-1]== 'B') chk[1]=1;
                else if(arr[k][j-1]== 'C') chk[2]=1;
                else if(arr[k][j-1]== 'D') chk[3]=1;

                if(k==p-1 && chk[0]+chk[1]+chk[2]+chk[3]==3)
                {
                    for(int l=0; l<4; l++)
                    {
                        if(chk[l]==0)
                            {
                                printf("%c ",65+l);
                                break;
                            }
                    }
                }
                else if(k == p-1)
                    cout<<'?'<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
