#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
main ()
{
    vector < int> vec;
    //vector <int> :: iterator it;
    int x;

    for(int i=0;i<5;i++)
        {cin>>x; vec.push_back(x);}
    //for(int i=0;i<vec.size();i++)
      //  cout<<vec[i]<<endl;
    //int a=vec.size();
    //cout<<a<<endl;
    //for(int i=0;i<vec.size();i++)
       // cout<<vec[i]<<endl;
       sort(vec.begin(),vec.end());
       for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<endl;
        sort(vec.rbegin(),vec.rend());
        cout<<"now"<<endl;
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<endl;
    getch ();
}
