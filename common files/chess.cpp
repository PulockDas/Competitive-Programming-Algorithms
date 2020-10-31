#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t,c,r;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        if((r>=3&&r<=6)&&(c<=6&&c>=3))
            n=8;
        else if((c==2||c==7)&&(r==2||r==7))
            n=4;
        else if(((r==2||r==7)&&(c>=3&&c<=6))||((c==2||c==7)&&(r>=3&&r<=6)))
            n=6;
        else if((c==1||c==8)&&(r==1||r==8))
            n=2;
        else if(((c==1||c==8)&&(r==2||r==7))||((r==1||r==8)&&(c==2||c==7)))
            n=3;
        else
            n=4;
        cout<<n<<endl;
    }
    return 0;
}
