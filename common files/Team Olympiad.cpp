#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    vector < int > a, b, c;

    int temp;

    for(int i=0; i<n; i++){
        cin >> temp;

        if(temp == 1)
            a.push_back(i+1);
        else if(temp == 2)
            b.push_back(i+1);
        else
            c.push_back(i+1);
    }

    int as = a.size(), bs = b.size(), cs = c.size();

    if(as == 0 || bs == 0 || cs == 0){
        cout << 0;
        return 0;
    }

    if(as <= bs && as <= cs){
        cout << as << endl;
        for(int i=0; i<as; i++){
            cout << a[i] << ' ' << b[i] << ' ' << c[i] <<endl;
        }
    }

    else if(bs <= as && bs <= cs){
        cout << bs << endl;
        for(int i=0; i<bs; i++){
            cout << a[i] << ' ' << b[i] << ' ' << c[i] <<endl;
        }
    }

    else{
        cout << cs << endl;
        for(int i=0; i<cs; i++){
            cout << a[i] << ' ' << b[i] << ' ' << c[i] <<endl;
        }
    }

    return 0;
}
