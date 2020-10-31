#include <bits/stdc++.h>

using namespace std;

main ()

{
    priority_queue <int> q;
    q.push(67);
    q.push(45);
    q.push(9876);
    q.push(1);
   while(!q.empty())
   {
       cout<<q.top()<<endl;
       q.pop();
   }

}
