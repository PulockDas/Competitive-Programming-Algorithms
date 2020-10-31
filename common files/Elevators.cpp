#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int id=0, pen=0, sol=0;
    int rnk=0;
};
bool compare(Node a, Node b)
{
    if(a.sol == b.sol)
        return (a.pen < b.pen);
    else
        return (a.sol > b.sol);
}

int main()
{
    int t;
    cin >> t;
    int Case = 1;
    while(t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        Node p[n];
        for(int i=0; i<n; i++)
        {
            cin >> p[i].id >> p[i].sol >> p[i].pen;

            int m;
            cin >> m;
            if(m!=0)
                int time[m];
            for(int i=0; i<m; i++)
            {
                int temp;
                cin >> temp;
                p[i].pen += temp;
            }
        }
//        cout << "OK" << endl;

        int Rank[n];
        for(int i=0; i<n ; i++)
            cin >> Rank[i];

        sort(p, p+n, compare);
        p[0].rnk = 1;
        int r = 1;
        for(int i=1; i<n; i++)
        {
            if( p[i].pen == p[i-1].pen && p[i].sol == p[i-1].sol )
                p[i].rnk = p[i].rnk;
            else
                p[i].rnk = p[i-1].rnk + 1;
        }
        for(int i=0; i<n; i++)
        {
            if(Rank[i] != p[i].rnk)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("Case %d: We respect our judges :)\n", Case++);
        else
            printf("Case %d: Say no to rumour >:\n", Case++);
    }
}
