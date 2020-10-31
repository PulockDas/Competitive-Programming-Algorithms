#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    int n, k;
    string s;

    while(q--){
        cin >> n >> k;
        cin >> s;

        int l = n-k+1;

        int ans = INT_MAX;

        string q1, q2, q3;

        if(k>2){
            for(int j=0; j<k; j+=3){
                q1.push_back('R');
                q1.push_back('G');
                q1.push_back('B');
                q2.push_back('G');
                q2.push_back('B');
                q2.push_back('R');
                q3.push_back('B');
                q3.push_back('R');
                q3.push_back('G');
            }
        }

        else if(k == 1){
            q1.push_back('R');
            q2.push_back('G');
            q3.push_back('B');
        }

        else{
            q1.push_back('R');
            q1.push_back('G');
            q2.push_back('G');
            q2.push_back('B');
            q3.push_back('B');
            q3.push_back('R');
            //cout <<"sis\t"<< q1 <<endl<<q2<<endl<<q3<<endl;
        }

        for(int i=0; i<l; i++){
            //cout << "op";
            string p = s.substr(i, k);
            //cout <<"p "<< p <<endl;

            int c1 = 0, c2 = 0, c3 = 0;
            for(int j=0; j<k; j++){
                if(q1[j] != p[j])
                    c1++;
                if(q2[j] != p[j])
                    c2++;
                if(q3[j] != p[j])
                    c3++;
            }

            //cout << c1 <<'\t'<<c2<<"\t"<<c3<<endl;

            ans = min(ans, c1);
            ans = min(ans, c2);
            ans = min(ans, c3);

        }

        cout << ans <<endl;

    }

    return 0;
}
