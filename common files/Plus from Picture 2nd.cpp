#include <bits/stdc++.h>
using namespace std;

bool s_be_plus[500][500];

int main ()
{
    int h, w;
    cin >> h >> w;

    char arr[h][w];

    for(int i=0; i<h; i++)
        for(int j=0; j<w; j++)
            cin >> arr[i][j];

    int ch=0, cw=0;

    for(int i=1; i<h-1; i++){
        for(int j=1; j<w-1; j++){
            if(arr[i][j]=='*' && arr[i-1][j]=='*' && arr[i+1][j]=='*'&&
                arr[i][j-1]=='*' && arr[i][j+1]=='*'){
                    ch = i, cw = j;
                    break;
            }
        }

        if(ch)
            break;
    }

    if(!ch){
        cout << "NO" << endl;
        return 0;
    }

    int up=ch, down=ch+1, right=cw+1, left=cw;

    while(up >=0 && arr[up][cw] == '*') s_be_plus[up--][cw] = true;

    while(down < h && arr[down][cw] == '*') s_be_plus[down++][cw] = true;

    while(left >=0 && arr[ch][left] == '*') s_be_plus[ch][left--] = true;

    while(right < w && arr[ch][right] == '*') s_be_plus[ch][right++] = true;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(arr[i][j] == '*' && s_be_plus[i][j] == false){
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}
