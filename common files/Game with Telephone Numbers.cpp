#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int turn = (n-11)/2;

    string s;
    cin >> s;

    int num8 = 0, without8=0;
    for(int i=0; i<n; i++){
        if(s[i] == '8')
            num8++;
    }

    if(turn >= num8){
        cout << "NO";
        return 0;
    }

    num8 = turn+1;
    int j=0, k=0;
    while(j!=num8){
        if(s[k] != '8')
            without8++;
        else
            j++;
        k++;
    }

    if(without8 <= turn)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
