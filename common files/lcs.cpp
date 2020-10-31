#include <bits/stdc++.h>
using namespace std;

struct matrix{
    int num;
    int up = 0, left = 0, diag = 0;
};

int lcs(string s1, string s2, int m, int n){

    string ans;
    struct matrix L[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i == 0 || j == 0){
                L[i][j].num = 0;
            }
            else if(s1[i-1] == s2[j-1]){
                L[i][j].num = L[i-1][j-1].num + 1;
                L[i][j].diag = 1;
            }
            else{
                L[i][j].num = max(L[i-1][j].num, L[i][j-1].num);
                if(L[i-1][j].num > L[i][j-1].num) L[i][j].up = 1;
                else L[i][j].left = 1;
            }
        }
    }

    for(int i=m, j=n; i!=0 && j!=0; ){
        if(L[i][j].diag) {
            ans.push_back(s1[i-1]);
            i--, j--;
        }

        else if(L[i][j].up){
            i--;
        }

        else if(L[i][j].left){
            j--;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << '(' << ans << ") ";

    return L[m][n].num;
}

int main ()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";

    cout << "Length of LCS is : " << lcs(s1, s2, s1.length(), s2.length());

    return 0;
}
