#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while(t--)
    {
        int k;
        cin >> k;
        long long num[k];
        for(int i=0; i<k; i++)
        {
            cin >> num[i];
        }

        sort(num, num+k);

        printf("Case %d: ", i++);
        cout << num[0] * num[k-1] << endl;
    }
}
