#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* next;
};

struct node* head;

void insert(int x, int y)
{
    node* temp1=new node();
    temp1->data=y;
    if(x==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    node* temp2=head;
    for(int i=0;i<x-2;i++)
        temp2=temp2->next;
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void print(){
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

int main ()
{
    head=NULL;
    insert(1, 5);
    insert(2, 3);
    insert(3, 7);
    insert(2, 2);
    insert(1, 0);
    print();
    return 0;
}
