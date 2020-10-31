#include <bits/stdc++.h>
using namespace std;

bool isprime(int a){
    int i;
    for(i=2;i*i<=a;i++)
        if(a%i==0) return 0;
    return 1;
}

void primf(int n){
    vector <int> num;
    int i;
    if(isprime(n))
        num.push_back(n);
    else{
        for(i=2;isprime(i) && i*i<=n;i++){
            if(n%i==0){
                num.push_back(i);
                primf(n/i);
                break;
            }
        }
    }
    for(i=0;i<num.size();i++) cout<<num[i]<<"\t";
}

int main ()
{
    while(1){
    cout<<"Enter a number to find it's prime factorization:\n";
    int n;
    cin>>n;
    primf(n);
    cout<<endl;
    }

    return 0;
}
