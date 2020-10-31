#include <bits/stdc++.h>
using namespace std;

struct matrix{
    int num;
    int up = 0, left = 0, diag = 0;
};

void ldis(string s1, string s2, int m, int n){

    string src, des;
    struct matrix L[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i == 0){
                L[i][j].num = j;
            }
            else if(j == 0){
                L[i][j].num = i;
            }
            else if(s1[i-1] == s2[j-1]){
                L[i][j].num = min(min(L[i-1][j-1].num, L[i][j-1].num+1),L[i-1][j].num+1);
                if(L[i][j].num == L[i-1][j-1].num) L[i][j].diag = 1;
                else if(L[i][j].num == L[i][j-1].num+1) L[i][j].left = 1;
                else L[i][j].up = 1;
            }
            else{
                L[i][j].num = min(min(L[i-1][j].num+1, L[i][j-1].num+1),L[i-1][j-1].num+2);
                if(L[i][j].num == L[i-1][j-1].num+2) L[i][j].diag = 1;
                else if(L[i][j].num == L[i][j-1].num+1) L[i][j].left = 1;
                else L[i][j].up = 1;
            }
        }
    }

    for(int i=m, j=n; i!=0 && j!=0; ){
        if(L[i][j].diag) {
            src.push_back(s1[i-1]);
            des.push_back(s2[j-1]);
            i--, j--;
        }

        else if(L[i][j].up){
            src.push_back(s1[i-1]);
            des.push_back('_');
            i--;
        }

        else if(L[i][j].left){
            des.push_back(s2[j-1]);
            src.push_back('_');
            j--;
        }
    }

    reverse(src.begin(), src.end());
    reverse(des.begin(), des.end());

    cout << src << endl << des << endl;

    cout << "Length of LEVENSHETIN DISTANCE is : " << L[m][n].num;

    return;
}

int main ()
{
    string s1 = "sunday";
    string s2 = "saturday";

    ldis(s1, s2, s1.length(), s2.length());

    return 0;
}

