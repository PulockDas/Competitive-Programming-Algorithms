#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
main ()
{
    list<float>li(4,7);
    list<float>::iterator it;
    float x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        li.push_front(x);

    }
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<endl;
    }
    li.reverse();
    li.clear();
    cout<<"reverse"<<endl;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"size"<<endl<<li.size();
    getch();
}
