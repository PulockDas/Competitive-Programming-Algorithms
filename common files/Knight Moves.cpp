#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    here:
    while(cin >> a >> b){
        int visited[8][8];

        memset(visited, 0, sizeof(visited));

        int mov[8][8];

        memset(mov, -1, sizeof(mov));

        int sx, sy;
        sx = a[0]-'a', sy = a[1] - '1';

        int fx, fy;
        fx = b[0] - 'a', fy = b[1] - '1';

        queue <pii> q;

        pii p;
        p.first = sx, p.second = sy;

        q.push(p);
        visited[sx][sy] = 1;
        mov[sx][sy] = 0;

        if(sx == fx && sy == fy){
            if(mov[fx][fy] >= 0){
                cout <<"To get from "<<a<<" to "<<b<<" takes "<<mov[fx][fy]<<" knight moves.\n";
                continue;
            }
        }

        while(!q.empty()){
            p = q.front();
            q.pop();

            int x, y;
            x = p.first-2, y = p.second+1;

            pii p1;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first-2, y = p.second-1;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first+2, y = p.second-1;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first+2, y = p.second+1;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }


            x = p.first-1, y = p.second+2;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first-1, y = p.second-2;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first+1, y = p.second-2;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

            x = p.first+1, y = p.second+2;

            if(x > -1 && x < 8 && y > -1 && y < 8){

                if(!visited[x][y]){
                    p1 = make_pair(x, y);
                    q.push(p1);

                    visited[p1.first][p1.second] = 1;
                    mov[p1.first][p1.second] = mov[p.first][p.second] + 1;

                    if(x == fx && y == fy)
                        break;
                }
            }

        }

        if(mov[fx][fy] >= 0)
            cout <<"To get from "<<a<<" to "<<b<<" takes "<<mov[fx][fy]<<" knight moves.\n";
    }

    return 0;
}
