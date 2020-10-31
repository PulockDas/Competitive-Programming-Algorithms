#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main ()
{
    arr[0] = 1;
    arr[4] = 1;
    arr[8] = 1;
    arr[14] = 1;
    arr[20] = 1;

    string s = "qewrtyupsidfghjklzxcavbnmo";

    char in;
    cin >> in;

    int i;
    for(i=0; i<26; i++){
        if(s[i] == in)
          break;
    }

    int lft=0, right=0;
    int j;

    for(j=i-1; j>-1; j--){

        int index = (int)s[j] - 97;
        if(arr[index] == 0)
            lft++;

        else
            break;
    }

    int k;

    for(k=i+1; k<26; k++){

        int index = (int)s[k] - 97;
        if(arr[index] == 0)
            right++;

        else
            break;
    }

    if(lft<right)
        cout << s[j];
    else
         cout << s[k];

    return 0;
}
