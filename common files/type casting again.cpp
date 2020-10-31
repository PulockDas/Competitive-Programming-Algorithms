#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
main ()
{
    float a,b;
    cin>>a>>b;
    cout<<showpoint;
    cout<<setprecision(10);
    float c=a+b;
    cout<<setw(20)<<"summation is :"<<c<<endl;
    float d=a*b;
    cout<<setw(20)<<"multiplication is :"<<d<<endl;
    float e=a-b;
    cout<<setw(20)<<"subtraction is :"<<e<<endl;
    float f=a/b;
    cout<<setw(20)<<"divission is :"<<f<<endl;
    getch ();
}
