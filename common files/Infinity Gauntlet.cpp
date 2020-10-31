#include <bits/stdc++.h>
using namespace std;

int mark[6];
string sd[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};

int main ()
{
    int n;
    cin >> n;

    string s;

    int m = n;
    while(n--){
        cin >> s;
        if(s[0] == 'p')
            mark[0] = 1;
        else if(s[0] == 'g')
            mark[1] = 1;
        else if(s[0] == 'b')
            mark[2] = 1;
        else if(s[0] == 'o')
            mark[3] = 1;
        else if(s[0] == 'r')
            mark[4] = 1;
        else
            mark[5] = 1;
    }

    cout << 6-m << endl;

    for(int i=0; i<6; i++){
        if(mark[i] == 0)
            cout << sd[i] << endl;
    }

    return 0;
}
