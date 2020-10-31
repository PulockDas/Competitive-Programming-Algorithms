#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll H, n;
    cin>>H >>n;
    int arr[n];

    ll s=0, mi=s;//, mind;
    int c=0, in;
    vector <ll> vec;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        s+=arr[i];
        if(c==0){
            if(s+H<1){
                c=1;
                in=i+1;
            }

            else{
                if(mi>s){
                    mi=s;
                    //mind=i;
                }

                vec.push_back(s);
                //cout<<vec[i]<<endl;
            }
        }
    }
    //cout<<mind<<endl;

    if(c==1)
        cout<<in;

    else if(s>-1)
        cout<<-1;

    else{
        mi*=-1;
        s*=-1;
        //cout<<mi<<endl;

        ll lk = H-mi;
        //cout<<lk<<endl;
        ll ans;
        ans = lk/s;
        if(lk % s != 0){
            //cout<<"hu"<<endl;
            ans++;
            lk += s-(lk%s);
        }
        //cout<<lk<<endl;

        ans *= n;

        lk = H - lk;
        //cout<<lk<<endl;
        for(int j=0; j<n; j++){
            ll kl = lk;
            kl += vec[j];
            if(kl<1){
                cout<<ans+j+1;
                break;
            }
        }
    }

    cout<<endl;

    return 0;
}
