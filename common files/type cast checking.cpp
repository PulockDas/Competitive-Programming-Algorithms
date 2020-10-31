#include <iostream>
#include <conio.h>
using namespace std;

main ()
{
    int num1,num2;
    cout <<"enter 2 numbers :" <<endl;
    cin >>num1 >>num2;
    double div=(double)num1/num2;
    double r=num1%num2;
    cout <<"dividing ans is :" <<div <<"    " <<r;
    getch ();
}
