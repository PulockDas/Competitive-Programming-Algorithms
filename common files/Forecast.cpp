#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, c;
    cin>>a>>b>>c;

    double ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
    double ans2=(-b-sqrt(b*b-4*a*c))/(2*a);

    if(ans1>ans2)
        printf("%lf\n%lf",ans1,ans2);
    else
        printf("%lf\n%lf",ans2,ans1);

    return 0;

}
