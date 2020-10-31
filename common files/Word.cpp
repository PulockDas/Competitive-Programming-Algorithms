#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    int l=0,u,i,len;
    len=x.length();

    for(i=0; i<len; i++){
        if(x[i]>96 && x[i]<123) l++;
    }

    u=len-l;

    if(l>=u){
        for(i=0; i<len; i++)
            printf("%c",tolower(x[i]));
    }

    else{
        for(i=0; i<len; i++)
            printf("%c",toupper(x[i]));
    }

    return 0;
}
