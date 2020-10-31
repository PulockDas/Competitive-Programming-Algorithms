#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, s, n) for(ll i=s; i<=n; i++)

typedef pair<ll, ll> pll;




vector<ll> pr_num;

void SieveOfEratosthenes() 
{  
    ll n=10000;

    bool prime[10001];
     
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++)
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          pr_num.push_back(p); 
} 


bool kmp(string text, string pattern){
    ll text_len = text.length();
    ll pattren_len = pattern.length();

    for(ll i=0; i<=text_len-pattren_len; i++){
        ll len=0;
        for(ll j=i; j<pattren_len; j++){
            if(text[j]==pattern[len]){
                len++;
            }else break;
        }

        if(len==pattren_len){
            return true;
        }
    }
    return false;
}


void solve(ll test){
    cout << "Case "<<test<<": ";

    ll n;
    cin >> n;

    string s;
    cin >> s;

    for(ll i=pr_num.size()-1; i>-1; i--){
        // cout <<"dhukse\n";
        ll num=pr_num[i];

        string pr_pat;

        while(1){
            ll bit = num%10;
            char x = '0'+bit;
            // cout << x<<endl;
            pr_pat.push_back(x);
            num/=10;

            if(!num){
                break;
            }
        }

        reverse(pr_pat.begin(), pr_pat.end());

        if(kmp(s, pr_pat)){
            cout << pr_pat<<endl;
            return;
        }
    }
    cout << "This is a junk!\n";
    return;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    SieveOfEratosthenes();

    ll test;
    cin >> test;

    loop(i, 1, test){
        solve(i);
    }

    return 0;
}