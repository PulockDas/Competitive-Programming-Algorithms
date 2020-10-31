#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int ques_num, paper;

        cin >> ques_num >> paper;

        map <int, char> ans;

        int arr[ques_num];
        memset(arr, 0, sizeof(arr));

        bool check[ques_num][4];
        for(int i=0; i<ques_num; i++){
            for(int j=0; j<4; j++)
                check[i][j] = true;
        }

        while(paper--){
            for(int i=0; i<ques_num; i++){
                char a, b;

                cin >> a >> b;

                if(b == 'T'){
                    ans[i] = a;
                    arr[i] = 1;
                }

                else{
                    check[i][a-'A'] = false;
                }
            }
        }

        int i;
        for(i=0; i<ques_num-1; i++){
            if(arr[i])
                cout << ans[i] << " ";

            else{
                int sum = 0;
                for(int j=0; j<4; j++){
                    if(!check[i][j])
                        sum ++;
                }

                if(sum == 3){
                    for(int j=0; j<4; j++){
                        if(check[i][j]){
                            cout << (char)(65+j) << " ";
                            break;
                        }
                    }
                }

                else
                    cout << "? ";
            }
        }

        if(arr[i])
                cout << ans[i];

            else{
                int sum = 0;
                for(int j=0; j<4; j++){
                    if(!check[i][j])
                        sum ++;
                }

                if(sum == 3){
                    for(int j=0; j<4; j++){
                        if(check[i][j]){
                            cout << (char)(65+j);
                            break;
                        }
                    }
                }

                else
                    cout << "?";
            }

        cout << endl;

    }

    return 0;
}
