#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m, a;
    cin>>n >>m >>a;
    long long b=ceil(n/(double)a)*ceil(m/(double)a);
    cout<<b<<endl;

    return 0;
}
