#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    int h25=0, h50=0;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int i;
    for(i=0; i<n; i++){
        if(arr[i]!=25){
            if(arr[i]==50){
                if(h25>0){
                    h50++;
                    h25--;
                }
                else
                    break;
            }
            else{
                if(h50>0 && h25>0){
                    h50--;
                    h25--;
                }

                else if(h25>2)
                    h25-=3;
                else
                    break;
            }
        }
        else
            h25++;
    }

    if(i==n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
