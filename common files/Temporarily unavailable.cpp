    #include <bits/stdc++.h>
    using namespace std;

    int main ()
    {
        int t;
        cin >> t;

        while(t--){
            int a, b, c, r;

            cin >> a >> b >> c >> r;

            if(a > b){
                int co = a;
                a = b;
                b = co;
            }

            int c1 = c-r, c2 = c+r;

            if(c1 > b || c2 < a){
                cout << b-a <<endl;
                continue;
            }

            if(c1 >= a && c2 <= b){
                cout << b-a-(c2-c1)<<endl;
                continue;
            }

            if(c1<=a && c2>=b){
                cout << 0<<endl;
                continue;
            }

            if(c1<a){
                cout << b-c2<<endl;
                continue;
            }

            cout << c1-a<<endl;
            continue;

        }

        return 0;
    }
