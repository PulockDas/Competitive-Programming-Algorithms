#include <bits/stdc++.h>
using namespace std;
int num[26];

int main ()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int i, l = s.length();

        for(i=0; i<l; i++)
            num[(int)s[i]-97]++;

        i = 1;
        int j=0;
        char c[l];

        while(i < 26){
            if(num[i]){
                for(; num[i]>0; j++){
                    c[j] = (char)(i+97);
                    num[i]--;
                }
                i += 2;
                break;
            }

            else{
                i += 2;
            }
        }

        while(i < 26){
            if(num[i]){
                for(; num[i]>0; j++){
                    c[j] = (char)(i+97);
                    num[i]--;
                }

                i+=2;
            }

            else
                i++;
        }

        i = 0;

        while(i < 26){
            if(num[i]){
                for(; num[i]>0; j++){
                    c[j] = (char)(i+97);
                    num[i]--;
                }
                i += 2;
                break;
            }

            else{
                i += 2;
            }
        }

        while(i < 26){
            if(num[i]){
                for(; num[i]>0; j++){
                    c[j] = (char)(i+97);
                    num[i]--;
                }

                i+=2;
            }

            else
                i++;
        }

    }



    return 0;
}
