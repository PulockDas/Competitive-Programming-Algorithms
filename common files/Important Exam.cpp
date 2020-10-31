#include <bits/stdc++.h>
using namespace std;
int check[5];

int main ()
{
    int n, m;
    cin >> n >> m;

    string arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int marks[m];

    for(int i=0; i<m; i++){
        cin >> marks[i];
    }

    int tot_marks = 0;

    for(int i=0; i<m; i++){
        for(int s=0; s<n; s++){
            int num = arr[s][i]-'A';
            check[num]++;
        }

        int p = 0;
        for(int j=1; j<5; j++){
            if(check[p] < check[j])
                p = j;
        }

        tot_marks += marks[i] * check[p];
        memset(check, 0, sizeof(check));

    }

    cout << tot_marks;

    return 0;
}
