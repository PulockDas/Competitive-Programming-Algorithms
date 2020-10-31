#include <bits/stdc++.h>
using namespace std;
#define fl float

int main ()
{
    int n;
    fl k , m;
    cin >> n >> k >> m;

    fl arr[n], s=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i];
    }

    fl sum = (fl)s;
    fl hero = (fl)n;

    sort(arr, arr+n);
    fl vag = 0;

    int i;
    for(i=n-1; i>-1; i--){
        if(m>0){
            vag ++;
        cout <<endl<< arr[i] << endl ;
            fl avg1 = (sum - (fl)arr[i]) / (hero-1);
            fl avg2 = (sum + 1) / hero;

            if(avg1 > avg2){
                cout << "d\n";
                sum -= arr[i];
                hero--;
                m--;
            }

            else{
                if(m > k){
                    sum += k;
                    m -= k;
                    cout <<m <<endl <<k<<endl;
                }

                else{
                    sum += m;
                    m = 0;
                }
            }
        }

        else
            break;
    }

    cout << sum << hero <<endl;

    cout << fixed << setprecision(7) << sum / vag;

    return 0;
}
