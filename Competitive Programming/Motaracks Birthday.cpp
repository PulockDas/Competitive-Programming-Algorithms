#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if(arr[i] != -1 && arr[i + 1] == -1){
                    vec.push_back(arr[i]);
                }
                continue;
            }

            if (i == n - 1)
            {
                if(arr[i] != -1 && arr[i - 1] == -1)
                    vec.push_back(arr[i]);
                continue;
            }

            if (arr[i] != -1 && (arr[i - 1] == -1 || arr[i + 1] == -1))
            {
                vec.push_back(arr[i]);
                //continue;
            }
        }

        if(vec.size()==0){
            cout << 0 << ' '<<42<<endl;
            continue;
        }

        int min = *min_element(vec.begin(), vec.end());
        int max = *max_element(vec.begin(), vec.end());

        int k = (min + max) / 2;

        for(int i =0; i<n; i++){
            if(arr[i] ==-1)
                arr[i] = k;
        }

        int diff = 0;
        for (int i = 0; i < n-1; i++)
        {
            int val = abs(arr[i] - arr[i+1]);
            if (val > diff)
                diff = val;
        }

        cout << diff << ' ' << k <<endl;
    }

    return 0;
}