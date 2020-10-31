#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, c, ans;
    cin >>a >>b >>c;

    int a1, b1, c1;

    a1 = a / 3;
    b1 = b / 2;
    c1 = c / 2;

    int mi = min(a1, b1);
    mi = min(mi, c1);

    ans = mi * 7;
    a -= mi * 3;
    b -= mi * 2;
    c -= mi * 2;

    priority_queue < int > q;
    int a2=a, b2=b, c2=c;

    for(int j=1; j<8; j++){
        int ans2 = 0;
        a=a2, b=b2, c=c2;

        for(int i=j; ; i++){

            int r = i % 7;
            if(r == 1 || r == 4){
                if(b != 0){
                    b--;
                    ans2++;
                }
                else{
                    q.push(ans2);
                    break;
                }
            }

            else if(r == 2 || r == 3 || r == 6){
                if(a != 0){
                    a--;
                    ans2++;
                }
                else{
                    q.push(ans2);
                    break;
                }
            }


            else if(r == 5 || r == 0){

                if(c != 0){
                    c--;
                    ans2++;
                }
                else{
                    q.push(ans2);
                    break;
                }
            }
        }
    }

    cout << q.top() + ans;

    return 0;
}

