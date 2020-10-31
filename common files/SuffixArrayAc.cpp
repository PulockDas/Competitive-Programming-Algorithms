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

void printsuffarray(int arr[], int n){
    for(int i=0; i<n; i++)
        cout <<arr[i]<< endl;
}

int main ()
{
    char txt[] = "banana";
    int n = strlen(txt);

    int *suffixarray = buildsuffarray(txt, n);

    printsuffarray(suffixarray, n);

    return 0;
}
