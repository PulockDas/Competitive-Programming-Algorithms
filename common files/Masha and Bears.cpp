#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int v1,v2,v3,v4;
    int a1=0,a2=0,a3=0;

    cin>>v1>>v2>>v3>>v4;

    int c=2*v3;
    if(c>=v4){
        while(v3<=c){
            if(2*v4>=v3 && v4<=v3){
                a3=1;
                break;
            }
            else
                v3++;
        }
    }

    c=2*v2;
    if(c>=v4){
        while(v2<=c){
            if(2*v4<v2 && v2>v3){
                a2=1;
                break;
            }
            else
                v2++;
        }
    }

    c=2*v1;
    if(c>=v4){
        while(v1<=c){
            if(2*v4<v1 && v1>v2){
                a1=1;
                break;
            }
            else
                v1++;
        }
    }
    if(a1==0 || a2==0 ||a3==0)
        cout<<"-1";
    else
        cout<<v1<<endl<<v2<<endl<<v3;

    return 0;
}
