#include <bits/stdc++.h>
using namespace std;

struct swe
{
    int reg;
    struct swe *link;
};

struct swe *head;

void print ()
{
    struct swe *temp;
    temp=head;
    cout<<temp->reg<<endl;
    while(temp->link!=NULL)
    {
        cout<<temp->link->reg<<endl;
        temp=temp->link;
    }
}
void insert (int val)
{
    struct swe *temp;
    temp=(struct swe *)malloc (sizeof(struct swe));
    temp->reg=val;
    temp->link=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        struct swe *t;
        t=head;

        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}

main ()
{
    head=NULL;
    insert(3);
    insert(5);
    insert(7);
    print ();
}
