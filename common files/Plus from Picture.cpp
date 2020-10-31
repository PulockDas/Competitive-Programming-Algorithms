#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int h, w;
    cin >> h >> w;

    char arr[h][w];

    for(int i=0; i<h; i++)
        for(int j=0; j<w; j++)
            cin >> arr[i][j];

    int ch = 0, height, widght;

    for(int i=1; i<h-1; i++){
        for(int j=1; j<w-1; j++){
            if(arr[i][j] == '*'){
                if(arr[i-1][j] == '*' && arr[i+1][j] == '*'
                && arr[i][j-1] == '*' && arr[i][j+1] == '*'){
                    ch = 1;
                    height = i, widght = j;
                    break;
                }
            }
        }

        if(ch == 1)
            break;
    }

    if(ch == 0){
        cout << "NO";
        return 0;
    }

    bool should_be_plus[h][w];
    for(int i=0; i<h; i++) for(int j=0; j<w; j++)
        should_be_plus[i][j] = false;

    int upp=height, low=height, lef=widght, right=widght;

    while(upp >= 0 && arr[upp][widght] == '*') should_be_plus[upp--][widght] = true;
    while(low < h && arr[low][widght] == '*') should_be_plus[low++][widght] = true;
    while(lef >= 0 && arr[height][lef] == '*') should_be_plus[height][lef--] = true;
    while(right < w && arr[height][right] == '*') should_be_plus[height][right] = true;

    for(int i=0; i<h; i++)
        for(int j=0; j<w; j++){
            if(arr[i][j] == '*' != should_be_plus[i][j]){
                    cout << "NO";
                    return 0;
            }
        }

    cout << "YES";

    return 0;
}
