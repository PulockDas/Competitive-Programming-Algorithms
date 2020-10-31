#include <iostream>
using namespace std;

void binarysearch(int arr[], int x){
    int si=sizeof(arr)/sizeof(arr[0]);
    int s=0,l=si-1;
    int m=(s+l)/2;
    int ch=0;
    while(s<=l){
        if(arr[m]==x){
            ch=1;
            cout<<"Index is present.\nAnd the number of index:\n"<<m;
            break;
        }
        else if(x>arr[m]){
            s=m+1; m=(s+l)/2;
        }
        else{
            l=m-1; m=(s+l)/2;
        }
    }
    if(ch==0)
                cout<<"Index is absent";
}

int main ()
{
    int arr[]={1,2,4,6,8,17,45,56,68,89,93,98};
    int x;
    cin>>x;
    binarysearch(arr, x);

    return 0;
}
