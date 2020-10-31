#include <bits/stdc++.h>
using namespace std;
vector <int> failure_table;

int finding_ind_num(string text, string pattern){
    int n = text.length();
    int m = pattern.length();

    n = n-m+1;

    for(int i=0; i<n;){
        string match="";
        int j;

        for(j=0; j<m; j++){
            if(text[i+j] != pattern[j]){
                break;
            }
            else{
                match.push_back(pattern[j]);
            }
        }

        if(j == m)
            return i+1;

        int index = j;

        i = i+m-failure_table[index]-1;
    }

    return -1;
}

void making_failure_table(string pattern){
    failure_table.push_back(0);
    failure_table.push_back(0);

    int m = pattern.length();
    for(int i=2; i<m; i++){
        string match = pattern.substr(0, i);

        bool ch = false;
        for(int j=i-1,k=1; j>0; j--,k++){
            string pre = match.substr(0, j);
            string suff = match.substr(k, j);

            if(pre == suff){
                failure_table.push_back(j);
                ch = true;
                break;
            }
        }

        if(!ch)
            failure_table.push_back(0);
    }

    failure_table.push_back(0);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string text;
    string pattern;

    cin >> text >> pattern;

    making_failure_table(pattern);

    int index = finding_ind_num(text, pattern);
    cout << index;

    return 0;
}