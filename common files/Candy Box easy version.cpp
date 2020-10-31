#include <bits/stdc++.h>
using namespace std;

int main (){
    int q;
    cin >> q;

    int n;

    while(q--){
        cin >> n;
        int arr[n+1];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        arr[n] = INT_MAX;

        sort(arr, arr+n+1);

        vector <int> vec;

        int s = 1;
        for(int i=0; i<n; i++){
            if(arr[i] == arr[i+1])
                s++;
            else{
                vec.push_back(s);
                s = 1;
            }
        }

        sort(vec.begin(), vec.end(), greater<int>());

        s = vec[0];


        for(int i=1; i<vec.size(); i++){

            if(vec[i-1] <= vec[i]){
                vec[i] = vec[i-1] - 1;

                if(vec[i] > 0)
                    s += vec[i];
                else
                    break;
            }
            else
                s += vec[i];
        }

        cout << s << endl;
    }

    return 0;
}
