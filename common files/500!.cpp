#include <bits/stdc++.h>
using namespace std;
char jora[10][10];

void charmul(){
    for(int i=0; i<9; i++){
        for(int j=i+1; j<10; j++){
            int r = i*j;
            jora[i][j] = (char)(r+48);
            jora[j][i] = jora[i][j];
        }
    }
}

string mul(string a, string b){
    int l1 = a.length();
    int l2 = b.length();

    if(l1 > l2){


    }


}

string fact(int n){

    if(n == 0)
        return "1";

    string s;
    int e = n;

    while(e){
        int r = e % 10;
        s.push_back((char)(r + 48));
        e /= 10;
    }

    return mul(s, fact(n--));
}

int main ()
{
    void charmul();

    int in;

    while(getline(cin, in)){

        cout << fact(in)<<endl;

    }



    return 0;
}
