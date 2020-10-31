#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main ()
{
    cout <<showpoint;
    float a,b,c,d;
    a=20+5;
    b=20-5;
    c=20*5;
    d=20/5;
    cout <<showpoint;
    cout <<fixed <<setprecision(2);
    cout <<setw(11)<<"sum is :" <<a <<endl;
    cout <<setw(11)<<"subtruc is :" <<b <<endl;
    cout <<setw(11)<<"multi is :" <<c <<endl;
    cout <<setw(11)<<"divi is :" <<d <<endl;

    getch();
}
