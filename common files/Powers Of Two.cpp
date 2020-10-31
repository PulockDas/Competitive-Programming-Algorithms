#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    priority_queue <int > vec;
    int i;
    for(i=0; i<k && n>0; i++){
        int m = log2(n);
        m = pow(2, m);
        n = n - m;
        vec.push(m);
    }

    if(i == k && n>0){
        cout << "NO";
        return 0;
    }

    int j = k - i;
    for(int b=0; b<j; b++){
        int g = vec.top();
        vec.pop();
        if(g / 2 == 0){
            cout << "NO";
            return 0;
        }
        vec.push(g / 2);
        vec.push(g / 2);
    }

    cout << "YES\n";
    while(!vec.empty()){
        cout<<vec.top()<<' ';
        vec.pop();
    }

    return 0;
}
