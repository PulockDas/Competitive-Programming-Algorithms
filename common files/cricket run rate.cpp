#include<iostream>
#include<iomanip>

using namespace std;

main ()
{
    int n,r1,r2,rb;
    float c,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r1>>r2>>rb;
        c=(float)r2/((300-(float)rb)/6);
        r=(((float)r1+1)-(float)r2)/((float)rb/6);
        cout<<showpoint;
        cout<<setprecision(3);
        cout<<c<<" "<<r<<endl;
    }
}
