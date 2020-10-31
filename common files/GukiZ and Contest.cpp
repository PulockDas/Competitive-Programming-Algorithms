#include <iostream>
using namespace std;

int maxi(int arr[], int v){
    int m=arr[0];
    for(int i=1; i<v; i++){
        if(arr[i]>m)
            m=arr[i];
    }
    return m;
}

int main ()
{
    int n,m,i,c;
    cin>>n;
    int arr[n],pos[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(c=1; c<=n;){
        m=maxi(arr, n);
        //cout<<m<<endl;
        int h=0;
        for(i=0; i<n; i++){
            if(arr[i]==m && arr[i]!=0){
                h++;
                arr[i]=0;
                pos[i]=c;
            }
        }
        c=c+h;
    }

    for(i=0; i<n; i++)
        cout<<pos[i]<<" ";

    return 0;
}
