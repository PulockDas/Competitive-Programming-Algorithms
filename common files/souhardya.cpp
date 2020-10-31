#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int candies[k];
    memset(candies,0,k);
//    for(int i=0; i<k; i++) candies[i]=0;
    for(int i=0; i<k; i++)
    {

        cout << candies[i] << endl;
    }
    int Count = 0;
    for(int i=0; i<n; i++)
    {
        int in;
        cin >> in;
        candies[in%k]++;
    }
    for(int i=0; i<k; i++)
    {

        cout << candies[i] << endl;
    }
    Count = candies[0];
    Count= floor(Count/2);
    for(int i=1; i<k; i++)
    {
        if( candies[i]!=0 && candies[i]>0 && candies[k-i]>0 )
        {
            Count = Count + 2*min(candies[i], candies[k-i]);
            candies[i]=0;
            candies[k-i]=0;
        }
    }

    cout << Count << endl;
}
