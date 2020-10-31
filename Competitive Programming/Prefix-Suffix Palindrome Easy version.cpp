#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string t;
        t = s;

        reverse(t.begin(), t.end());

        if(s == t){
            cout << s <<endl;
            continue;
        }

        vector<int>suru;
        vector<int>sesh;

        int l = s.length();
        for(int i=0; i<l; i++){
            if(s[i] == s[0])
                suru.push_back(i);
            else if(s[i] == s[l-1])
                sesh.push_back(i);
        }

        sort(suru.begin(), suru.end());
        sort(sesh.begin(), sesh.end());

        string ans="";
        for(int i=1; i<suru.size(); i++){
            string copy = s.substr(0, suru[i]+1);

            string copy2="";
            string copy3="";

            int j,k;
            for(j=0,k=suru[i]; j<k; j++, k--){
                if(copy[j] == copy[k]){
                    copy2 += copy[j]; 
                    copy3 = copy[k]+copy3;
                }

                else
                {
                    break;
                }
                
            }

            if(j<=k){
                copy = copy2+copy[j]+copy3;
            }

            // string copy2 = copy;
            // reverse(copy2.begin(), copy2.end());

            // if(copy == copy2){
            if(ans.length()<copy.length())
                ans = copy;
            // }
        }

        for(int i=0; i<sesh.size()-1; i++){
            string copy = s.substr(sesh[i], l-sesh[i]);

            string copy2="";
            string copy3="";

            int j,k;
            for(j=0,k=suru[i]; j<k; j++, k--){
                if(copy[j] == copy[k]){
                    copy2 += copy[j]; 
                    copy3 = copy[k]+copy3;
                }

                else
                {
                    break;
                }
                
            }

            if(j<=k){
                copy = copy2+copy[j]+copy3;
            }

            // string copy2 = copy;
            // reverse(copy2.begin(), copy2.end());

            // if(copy == copy2){
            if(ans.length()<copy.length())
                ans = copy;
            // }
        }

        cout << ans <<endl;

    }


    return 0;
}