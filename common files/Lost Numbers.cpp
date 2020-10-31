#include <bits/stdc++.h>
using namespace std;

int mark[6];

int main ()
{
    int num[] = {4 , 8, 15, 16, 23, 42};
    int arr[6];
    int i=2;
    while(i--){
        string s;
        if(i==1)
            s = "? 1 1";
        else
            s = "? 2 2";

        cout << s << endl;///4 , 8, 15, 16, 23, 42
        fflush(stdout);

        int in;
        cin >> in;
        in = sqrt(in);

        if(s[1] == '1')
            arr[0]=in;
        else
            arr[1]=in;

        if(in == 4)
            mark[0] = 1;
        else if(in == 8)
            mark[1] = 1;
        else if(in == 15)
            mark[2] = 1;
        else if(in == 16)
            mark[3] = 1;
        else if(in == 23)
            mark[4] = 1;
        else
            mark[5] = 1;
    }

    i = 2;
    here:
    while(i--){
        string s;

        if(i == 1)
            s = "? 3 5";
        else
            s = "? 4 6";

        cout << s << endl;
        fflush(stdout);

        int in;
        cin >> in;

        for(int j=0; j<6; j++){
            if(!mark[j]){
                if(in % num[j] == 0){
                    int nx = in / num[j];

                    for(int k=0; k<6; k++){
                        if(num[k]==nx && !mark[k]){
                            if(s[1]=='3'){
                                arr[2]=num[j];
                                arr[4]=nx;
                                goto here;
                            }
                            else{
                                arr[3]=num[j];
                                arr[5]=nx;
                                goto here;
                            }
                        }

                    }
                }
            }
        }
    }

    cout << '!';
    for(i=0; i<6; i++)
        cout << ' ' << arr[i];
    cout << endl;

    fflush(stdout);

    return 0;
}
