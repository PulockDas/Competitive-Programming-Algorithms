#include <bits/stdc++.h>
using namespace std;
int mark[26];

int main ()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int l = s.length();
        for(int i=0; i<l; i++)
            mark[(int)s[i]-97]++;

        char c[l];
        int i,j;

        for(i=1, j=0; i<26; i+=2){
            while(mark[i]--){
                c[j]=(char)(i+97);
                j++;
            }
        }

        for(i=0; i<26; i+=2){
            while(mark[i]--){
                c[j]=(char)(i+97);
                if(j>0){
                    if(char(i+96) == c[j-1] || char(i+98) == c[j-1]){
                        cout << c[j] << c[j-1]<< "No answer" << endl;
                        goto br;
                    }
                }

                j++;
            }
        }

        for(i=0; i<l; i++)
            cout << c[i];
        cout << endl;

        br:
        for(i=0; i<26; i++)
            mark[i]=0;

    }

    return 0;
}
