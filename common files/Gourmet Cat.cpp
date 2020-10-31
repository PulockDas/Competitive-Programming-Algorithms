#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, c, ans;
    cin >>a >>b >>c;

    int mi = min(a, b);
    mi = min(mi, c);

    int a1, b1, c1;

    if(mi == c){
        c1 = c;
        if(c1 % 2 == 1)
            c1--;

        for(; c1 != 0; c1 -= 2){
            a1 = (c1 * 3) / 2;
            b1 = c1;

            if(a1 <= a && b1 <= b)
                break;
        }

        ans = (c1/2)*7;
        if(c1 != 0){
            a -= a1;
            b -= b1;
        }
        c -= c1;
    }

    else if(mi == b){
        b1 = b;
        if(b1 % 2 == 1)
            b1--;

        for(; b !=0; b1 -= 2){
            a1 = (b1 * 3) / 2;
            c1 = b1;

            if(a1 <= a && c1 <= c)
                break;
        }

        ans = (b1/2)*7;
        if(b1 != 0){
            c -= c1;
            a -= a1;
        }
        b -= b1;
    }

    else{
        a1 = a;
        if(a1 % 3 != 0)
            a1 -= a1 % 3;

        for(; a1 !=0; a1 -= 3){
            c1 = (a1 * 2) / 3;
            b1 = c1;

            if(b1 <= b && c1 <= c)
                break;
        }

        ans = (a1/3)*7;
        if(c1 != 0){
            a -= a1;
            b -= b1;
        }
        c -= c1;
    }

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
