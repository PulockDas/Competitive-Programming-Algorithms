#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, so;

    for(int i=0; i<n; i++){
        cin >> s >> so;
        int l1 = s.length(), l2 = so.length();

        if(l1 <= l2){
            int k=0, m=0, ch=0;
            while(k < l1 && m < l2){

                int c1 = 0, c2 = 0;
                while(s[k] == s[k+1]){
                    k++;
                    c1++;
                }

                if(s[k] == so[m]){
                    while(so[m] == so[m+1]){
                        m++;
                        c2++;
                    }
                    if(c1 > c2){
                        cout << "NO" << endl;
                        ch = 1;
                        break;
                    }
                    else{
                        k++;
                        m++;
                    }
                }

                else{
                    cout << "NO" <<endl;
                    ch = 1;
                    break;
                }
            }

            if(k == l1 && m == l2)
                cout << "YES" << endl;

            else if(!ch)
                cout << "NO" <<endl;
    }

    else
        cout << "NO" <<endl;
    }

    return 0;
}
