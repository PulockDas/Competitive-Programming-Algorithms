#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll info[] = {1, 6, 6, 6, 8, 8, 8, 10, 10, 20};

    cout << "Enter the number of which's upper bound should be found:\n";

    ll input;
    cin >> input;

    ll begin = 0, end = 9;

    ll index=-1;
    while(begin<=end){
        ll mid = (begin+end)/2;

        if(info[mid] == input){
            index = mid;
            begin = mid+1;
        }

        else if(info[mid] < input){
            begin = mid+1;
        }

        else{
            end = mid-1;
        }

        cout << begin << " "<< end<<endl;
    }

    cout << begin << " "<<index;

    return 0;
}
