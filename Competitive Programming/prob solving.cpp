#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll arr1[]={1, 4, 7};
    ll arr2[]={1, 8, 9};
    ll arr3[]={9, 6, 4};
    ll arr4[]={5, 2, 3};
    ll arr5[]={2, 8, 6};

    ll deya[]={1, 4, 7, 9, 8, 6};

    vector <vector<ll>>boro;

    for(ll i=0; i<6; i++){//1st pos

        ll num = deya[i];
        vector <ll> mid;

        mid.push_back(num);

        for(ll j=0; j<6; j++){//2nd pos
            if(i==j) continue;

            ll num2 = deya[j];
            mid.push_back(num2);

            for(ll k=0; k<6; k++){//3rd pos
                if(k==i || k==j) continue;

                ll num3 = deya[k];
                mid.push_back(num3);


                bool hobe=true;

                
                here:
                if(hobe){
                    ll n=0, s=0;

                    for( ; s<3; s++){//mid will be checked
                        ll lnum= mid[s];

                        for(ll a=0; a<3; a++){//arr1[]
                            if(arr1[a] == lnum){
                                n++;
                                if((a == s) || (n>1 && n<1)){
                                    hobe = false;
                                    goto here;
                                }
                            }
                        }
                    }
                }


                if(hobe){
                    n=0, s=0;

                    for( ; s<3; s++){//mid will be checked
                        ll lnum= mid[s];

                        for(ll a=0; a<3; a++){//arr2[]
                            if(arr2[a] == lnum){
                                n++;
                                if(a != s || (n>1 && n<1)){
                                    hobe = false;
                                    goto here;
                                }
                            }
                        }
                    }
                }



                if(hobe){
                    n=0, s=0;

                    for( ; s<3; s++){//mid will be checked
                        ll lnum= mid[s];

                        for(ll a=0; a<3; a++){//arr3[]
                            if(arr3[a] == lnum){
                                n++;
                                if(a == s || (n>2 && n<2)){
                                    hobe = false;
                                    goto here;
                                }
                            }
                        }
                    }
                }

                if(hobe){
                    n=0, s=0;

                    for( ; s<3; s++){//mid will be checked
                        ll lnum= mid[s];

                        for(ll a=0; a<3; a++){//arr3[]
                            if(arr4[a] == lnum){
                                n++;
                                if(a == s || (n>1 && n<1)){
                                    hobe = false;
                                    goto here;
                                }
                            }
                        }
                    }
                }

                if(hobe){
                    for(ll p=0; p<3; p++){
                        cout << mid[p]<<' ';
                    }
                    return 0;
                }
                
            }
        }
        

    }

    return 0;
}