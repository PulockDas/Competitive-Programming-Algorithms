#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    int s = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i];
    }

    s /= 2;

    int mid = arr[0];
    vector < int> vec;
    for(int i=1; i<n; i++){
        if(arr[i] <= arr[0]/2){
            mid += arr[i];
            vec.push_back(i);
        }
    }

    if(mid > s){
        cout << vec.size()+1 << endl << 1 <<' ';
        for(int i=0; i<vec.size(); i++)
            cout << vec[i]+1 << ' ';
    }

    else
        cout << 0;

    return 0;
}
