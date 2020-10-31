#include <bits/stdc++.h>
using namespace std;

struct suffix{
    int index;
    char *suff;
};

int cmp(struct suffix a, struct suffix b){
    return strcmp(a.suff, b.suff) < 0 ? 1 : 0;
}

int *buildsuffarray(char *txt, int n){
    struct suffix suffixes[n];

    for(int i=0; i<n; i++){
        suffixes[i].index = i;
        suffixes[i].suff = (txt+i);
    }

    sort(suffixes, suffixes+n, cmp);
    int *suffixarray = new int[n];

    for(int i=0; i<n; i++)
        suffixarray[i] = suffixes[i].index;

    return suffixarray;

}

int main ()
{
    int t;
    cin >> t;

    int p, q;
    char s[10000];
    while(t--){
        scanf("%s", s);
        cin >> p >>q;
        int n = strlen(s);

        int *suffixarray = buildsuffarray(s, n);

        int c=1;
        for(int i=1,j=0; i<n; i++){
            if(suffixarray[i] != suffixarray[j]){
                c++;
                j = i;
            }
        }

        cout<<c<<endl;
    }


    return 0;
}
