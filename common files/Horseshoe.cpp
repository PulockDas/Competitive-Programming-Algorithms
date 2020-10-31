#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a;
    set< int> shoe;
    for(int i=0; i<4; i++){
        cin>>a;
        shoe.insert(a);
    }
    cout<<4-shoe.size();

    return 0;
}
