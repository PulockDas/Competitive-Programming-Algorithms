#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int b, int e){
    for(int i=b+1; i<=e; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    vector <int > vec;

    if(n>=2){
        for(int i=0; i<n; i+=2){///2
            if(issorted(arr, i, i+1))
                vec.push_back(2);
        }
    }

    if(n>=4){
        for(int i=0; i<n; i+=4){///4
            if(issorted(arr, i, i+3))
                vec.push_back(4);
        }
    }

    if(n>=8){
        for(int i=0; i<n; i+=8){///8
            if(issorted(arr, i, i+7))
                vec.push_back(8);
        }
    }

    if(n>=16){
        for(int i=0; i<n; i+=16){///16
            if(issorted(arr, i, i+15))
                vec.push_back(16);
        }
    }

    vec.push_back(1);

    int mx=vec[0];
    for(int i=1; i<vec.size(); i++){
        if(mx<vec[i])
            mx = vec[i];
    }

    cout<<mx;

    return 0;
}
