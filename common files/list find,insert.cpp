#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
main ()
{
    float arr[]={1,5,7,89,200};
    list <float> li(arr,arr+5);
    list <float> ::iterator it;
    it=li.begin();
    it++;
    //for(it=li.begin();it!=li.end();it++)
    //{
      //  cout<<*it<<endl;
    //}
    li.insert(it,67);
//for(it=li.begin();it!=li.end();it++)
  //  {
    //    cout<<*it<<endl;
    //}
    it=find(li.begin(), li.end(), 89);
    li.insert(it,78);
    it;
    li.erase(it);
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<endl;
    }
    getch ();
}
