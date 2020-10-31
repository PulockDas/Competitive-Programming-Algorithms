#include <bits/stdc++.h>
using namespace std;

int arr[100],top=-1;

void push(int x){
    top++;
    arr[top]=x;
}

void pop(){
    top--;
}

int Top(){
    return arr[top];
}

int isempty(){
    if(top==-1)
        return 1;
    return 0;
}

int main ()
{
    cout<<"u 've to have less than 101 numbers in the stack"<<endl;
    int check=isempty();
    cout<<check<<endl;
    push(3);
    push(5);
    push(34);
    cout<<Top()<<"\t";
    pop();
    cout<<Top()<<"\n";
    check=isempty();
    cout<<check<<endl;
    return 0;
}
