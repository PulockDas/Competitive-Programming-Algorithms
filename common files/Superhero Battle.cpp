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

        ll i, qu, ans=0;
        while(H>mi){
            qu=H/mi;
            H-=qu*mi;
            H+=(mi-s)*qu;
            i=qu*n;
            ans+=i;
        }
        if(H<1){
            ans-=n;
            H+=s;
        }

        for(int j=0; j<n; j++){
            ll lk=H;
            lk+=vec[j];
            if(lk<1){
                cout<<ans+j+1;
                break;
            }
        }
    }

    cout<<endl;

    return 0;
}
