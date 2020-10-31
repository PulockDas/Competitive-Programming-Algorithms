#include <bits/stdc++.h>
using namespace std;

struct jinis{
    float it_value;
    float it_amount;
};

int main ()
{
    cout << "Total item :\n";
    int item;

    cin >> item;

    cout << "Number of kg :\n";
    float kg;
    cin >> kg;

    struct jinis arr[item];
    priority_queue <pair<float, int> > pq;

    for(int i=0; i<item; i++){
        float val, amount;
        cin >> val >> amount;
        pq.push(make_pair(val/amount, i));

        arr[i].it_value = val;
        arr[i].it_amount = amount;
    }

    float total_pro = 0, total_wei = 0;

    float ch[item];
    memset(ch, 0, sizeof(ch));

    while(!pq.empty()){
        int in = pq.top().second;

        total_wei += arr[in].it_amount;
        if(total_wei <= kg){
            total_pro += arr[in].it_value;
            ch[in] = arr[in].it_amount;
        }

        else{
            float baki = total_wei - arr[in].it_amount;
            baki = kg - baki;
            total_pro += baki * pq.top().first;
            ch[in] = baki;
        }

        pq.pop();

    }

    cout << total_pro <<endl << kg<<endl;

    cout << "product-wise :\n";

    for(int i=0; i<item; i++)
        cout << i <<' '<<ch[i]<<endl;

    return 0;
}
