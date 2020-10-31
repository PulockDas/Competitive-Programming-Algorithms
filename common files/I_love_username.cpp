#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,points,min,max,c=0;
    cin>>n;
    cin>>points;
    min=points;
    max=points;

    for(int i=1; i<n; i++){
        cin>>points;
        if(points<min){
            c++;
            min=points;
        }
        else if(points>max){
            c++;
            max=points;
        }
    }

    cout<<c;

    return 0;
}
