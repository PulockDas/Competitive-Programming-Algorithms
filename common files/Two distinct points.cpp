#include <iostream>
using namespace std;

int main ()
{
    int q,l1,r1,l2,r2;
    cin>>q;
    while(q--){
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" ";
        for(int i=l2; i<=r2; i++){
            if(i!=l1){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
