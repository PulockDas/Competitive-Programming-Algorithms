#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    queue <int > q;
    set < int > vals;

    int num = n;

    while(num--){
        int id;
        cin >> id;

        if(!vals.count(id)){
            if(q.size() >= k){
                int cur = q.front();
                q.pop();
                vals.erase(cur);
            }

            vals.insert(id);
            q.push(id);
        }
    }

    cout << q.size() << endl;

    vector <int > res;

    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }

    reverse(res.begin(), res.end());

    for(auto it : res) cout << it << " ";

    return 0;
}
