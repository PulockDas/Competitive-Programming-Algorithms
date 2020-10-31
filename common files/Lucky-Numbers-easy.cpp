#include <bits/stdc++.h>
using namespace std;

vector <long long > vec;

void tr(long long number, int fours, int sevens){
    if(number > 1e10)
        return;

    if(fours == sevens)
        vec.push_back(number);

    tr(number * 10 + 4, fours + 1, sevens);
    tr(number * 10 + 7, fours, sevens + 1);
}
int main ()
{
    tr(4, 1, 0);
    tr(7, 0, 1);

    long long n;
    cin >> n;

    sort(vec.begin(), vec.end());

    cout << vec[lower_bound(vec.begin(), vec.end(), n) - vec.begin()] <<endl;

    return 0;
}
