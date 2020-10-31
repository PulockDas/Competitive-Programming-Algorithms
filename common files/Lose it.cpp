#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    vector <int> count[6];

    int in;
    for(int i=0; i<n; i++){
        cin >> in;
        if(in == 4)
            count[0].push_back(i);
        else if(in == 8)
            count[1].push_back(i);
        else if(in == 15)
            count[2].push_back(i);
        else if(in == 16)
            count[3].push_back(i);
        else if(in == 23)
            count[4].push_back(i);
        else if(in == 42)
            count[5].push_back(i);
    }

    int c = 0;
    bool ch = count[0].size() > 0 && count[1].size() > 0 &&
                count[2].size() > 0 && count[3].size() > 0 &&
                count[4].size() > 0 && count[5].size() > 0;

    while(ch){
        int man = count[0][0];
        count[0].erase(count[0].begin()+0);

        bool thik = true;
        for(int i=1; i<6 && thik; i++){
            while(count[i].size() > 0 && man > count[i][0]){
                count[i].erase(count[0].begin()+0);
            }

            if(count[i].size() > 0 && man < count[i][0]){
                man = count[i][0];
                count[i].erase(count[0].begin()+0);
            }

            else
                thik = false;
        }

        if(thik)
            c++;

        ch = count[0].size() > 0 && count[1].size() > 0 &&
                count[2].size() > 0 && count[3].size() > 0 &&
                count[4].size() > 0 && count[5].size() > 0;

    }

    cout << n - c*6;

    return 0;
}
