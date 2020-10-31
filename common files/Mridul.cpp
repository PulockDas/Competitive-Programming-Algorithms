#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T,y,k;
    cin>>T;
    while(T--){
        cin>>y;
        k=(abs(y-2001))/4;
        k=abs(y-2001)+k;
        k%=7;
        if(y>=2001){
            if(k==0)
                cout<<"Monday"<<endl;
            else if(k==1)
                cout<<"Tuesday"<<endl;
            else if(k==2)
                cout<<"Wednesday"<<endl;
            else if(k==3)
                cout<<"Thrusday"<<endl;
            else if(k==4)
                cout<<"Friday"<<endl;
            else if(k==5)
                cout<<"Saturday"<<endl;
            else
                cout<<"Sunday"<<endl;
        }
        else{
            if(k==0)
                cout<<"Monday"<<endl;
            else if(k==1)
                cout<<"Sunday"<<endl;
            else if(k==2)
                cout<<"Saturday"<<endl;
            else if(k==3)
                cout<<"Friday"<<endl;
            else if(k==4)
                cout<<"Tuesday"<<endl;
            else if(k==5)
                cout<<"Wednesday"<<endl;
            else
                cout<<"Tuesday"<<endl;
        }
    }

    return 0;
}
