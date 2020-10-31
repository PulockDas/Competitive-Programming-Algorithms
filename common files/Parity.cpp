#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int b, k;
    cin>>b>>k;

    int arr[k];

    if(b%2!=0){
        int odd=0;
        for(int i=0; i<k; i++){
            cin>>arr[i];

            if(arr[i]%2!=0)
                odd++;
        }

        if(odd%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }

    else{
        for(int i=0; i<k; i++)
            cin>>arr[i];

        if(arr[k-1]%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }

    return 0;
}
