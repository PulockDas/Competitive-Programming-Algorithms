#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    char ch;

    int s=0;
    if(a<b){
        s+=a;
        ch='a';
    }
    else{
        s+=b;
        ch='b';
    }
    if(a+b<c){
        s+=a+b;
    }
    else
        s+=c;
    if(ch=='a')
        ch='b';
    else
        ch='a';
    if(ch=='a'){
        if(b+c<a)
            s+=b+c;
        else
            s+=a;
    }
    else{
        if(a+c<b)
            s+=a+c;
        else
            s+=b;
    }

    cout<<s;

    return 0;
}
