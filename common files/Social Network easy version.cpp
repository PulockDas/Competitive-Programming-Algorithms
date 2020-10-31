#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;

    cin >> n >> k;

    int arr[n];
    map <int, int> m;

    for(int i=0; i<n; i++){
        cin >> arr[i];

        m[arr[i]] = 0;
    }

    vector <int > vec;

    int i;

    for(i=0; i<n && vec.size()<k; i++){
        if(m[arr[i]] == 0){
            vec.insert(vec.begin(), arr[i]);
            m[arr[i]]++;
        }
    }

    if(n <= k){
        cout << vec.size()<<endl;
        for(int j=0; j<vec.size(); j++)
            cout << vec[j]<<" ";
        return 0;
    }

    for(; i<n; i++){
        if(m[arr[i]] == 0){

            m[vec[vec.size()-1]]--;
            vec.erase(vec.begin()+k-1);
            vec.insert(vec.begin(), arr[i]);
            m[arr[i]]++;
        }
    }

    cout << vec.size()<<endl;
        for(int j=0; j<vec.size(); j++)
            cout << vec[j]<<" ";

    return 0;
}
