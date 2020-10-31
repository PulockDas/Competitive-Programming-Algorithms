#include <bits/stdc++.h>
using namespace std;

const int alphabet=10;

struct Trienode{
    struct Trienode *child[alphabet];

    bool isendofword;
};

struct Trienode *getnode(void){
    struct Trienode *pNode=new Trienode;

    for(int i=0; i<alphabet; i++)
        pNode->child[i]=NULL;

    pNode->isendofword=false;

    return pNode;
}

void insert(struct Trienode *root, string x){
    struct Trienode *pCrawl=root;

    int l=x.length();

    for(int i=0; i<l; i++){
        int in=x[i]-'0';

        if(!pCrawl->child[in]){
            pCrawl->child[in]=getnode();
        }

        pCrawl=pCrawl->child[in];
    }

    pCrawl->isendofword=true;
}

bool checker (struct Trienode *root, string x){
    struct Trienode *pCrawl=root;

    int l=x.length();

    for(int i=0; i<l; i++){
        int in=x[i]-'0';
        if(pCrawl->isendofword)
            return 1;
        pCrawl=pCrawl->child[in];
    }

    return 0;
}

int main ()
{
    int t;
    scanf("%d", &t);

    while(t--){
        struct Trienode *root=getnode();
        int n;
        scanf("%d", &n);

        string arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
            insert(root, arr[i]);
        }

        int i;
        for(i=0; i<n; i++){
            if(checker(root, arr[i])){
                cout<<"NO\n";
                break;
            }
        }

        if(i==n)
            cout<<"YES\n";

    }

    return 0;
}
