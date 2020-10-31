#include <bits/stdc++.h>
using namespace std;

int arr[100],base=-1,ans=0;

void push(int x){
    base++;
    arr[base]=x;
}

void pop(){
    ans++;
}

int Front(){
    return arr[ans];
}

int isempty(){
    if(ans>base)
        return 1;
    return 0;
}

int main(){
    cout<<"u 've highest 100 numbers to set in queue"<<endl;
    cout<<isempty()<<endl;
    push(5);
    push(2);
    push(89);
    cout<<Front()<<endl;
    pop();
    cout<<Front()<<endl;
    pop();
    cout<<isempty()<<endl;
    cout<<Front()<<endl;
    return 0;
}
