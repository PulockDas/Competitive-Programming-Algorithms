#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    suru:
    while(q--){
        int n;
        cin >> n;

        int arr[n][6];
        pair <int, int> p;
        priority_queue <pair <int, int> > pqx;
        priority_queue <pair <int, int> > pqy;

        int bame[n], dane[n], up[n], down[n];

        for(int i=0; i<n; i++){
            for(int j=0; j<6; j++){
                cin >> arr[i][j];
            }

            p = make_pair(arr[i][0], i);
            pqx.push(p);

            p = make_pair(arr[i][1], i);
            pqy.push(p);

            if(arr[i][2] == 1) bame[i] = 1; else bame[i] = 0;
            if(arr[i][4] == 1) dane[i] = 1; else dane[i] = 0;
            if(arr[i][3] == 1) up[i] = 1; else up[i] = 0;
            if(arr[i][5] == 1) down[i] = 1; else down[i] = 0;

        }

        p = pqx.top();
        pqx.pop();
        int ansx = p.first;
        int in1 = p.second;

        while(!pqx.empty()){
            pair <int, int> q = pqx.top();
            pqx.pop();

            int in2 = q.second;

           // cout << ansx <<' '<<q.first<<endl;
            if(ansx != q.first){
                if(bame[in1]){
                    ansx = q.first;
                    in1 = in2;
                }
                else if(!dane[in2]){
                    cout << 0 <<endl;
                    goto suru;
                }
            }
        }

        p = pqy.top();
        pqy.pop();
        int ansy = p.first;
        in1 = p.second;

        while(!pqy.empty()){
            pair <int, int> q = pqy.top();
            pqy.pop();

            int in2 = q.second;

           // cout << ansy <<' '<<q.first<<endl;
            if(ansy != q.first){
                if(down[in1]){
                    ansy = q.first;
                    in1 = in2;
                }
                else if(!up[in2]){
                    cout << 0 <<endl;
                    goto suru;
                }
            }
        }

        cout << 1 <<' '<<ansx<<' '<<ansy<<endl;

    }

    return 0;
}
