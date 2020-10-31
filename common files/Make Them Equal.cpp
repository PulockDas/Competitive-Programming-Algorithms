#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a;
    set <int > numbers;
    for(int i=0; i<n; i++){
        cin >> a;
        numbers.insert(a);
    }

    set <int > :: iterator it = numbers.begin();
    set <int > :: iterator it2 = numbers.end();
    it2--;
    int c = (*it2 - *it) / 2;

    if(numbers.size() < 2){
        cout << 0;
        return 0;
    }

    if(numbers.size() < 3){
        if((*it2 - *it) % 2 == 0)
            cout << c;

        else
            cout << *it2 - *it;

        return 0;
    }

    if((*it2 - *it) % 2 == 0){

        int b = *it + c;
        it++;
        int i=2;

        for( ; it != it2; it++, i++){
            if(b != *it){
                cout << -1;
                break;
            }
        }

        if(i == numbers.size())
            cout << c;
    }

    else
        cout << -1;

    return 0;

}
