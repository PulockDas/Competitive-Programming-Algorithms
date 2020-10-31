#include <bits/stdc++.h>
using namespace std;

const int alpha=26;

struct Trienode{
    struct Trienode *child[26];
    bool isendofword;
    int s;
};

struct Trienode *getnode(void){
    struct Trienode *pNode=new Trienode;

    for(int i=0; i<alpha; i++)
        pNode->child[i]=NULL;

    pNode->isendofword=false;
    pNode->s=0;

    return pNode;
}

void sinsert(struct Trienode *pCrawl, string x){
    int l=x.length();

    for(int i=0; i<l; i++){
        int in=x[i]-'a';

        if(!pCrawl->child[in])
            pCrawl->child[in]=getnode();

        pCrawl=pCrawl->child[in];
        pCrawl->s++;
    }

    pCrawl->isendofword=true;
}

int finding(struct Trienode *pCrawl, string x){
    int l=x.length();

    for(int i=0; i<l; i++){
        int in=x[i]-'a';

        if(!pCrawl->child[in])
            return 0;
        pCrawl=pCrawl->child[in];
    }

    return pCrawl->s;
}

int main ()
{
    int n;
    scanf("%d", &n);

    struct Trienode *root=getnode();
    while(n--){
        string x1, x2;
        cin>>x1;//getline(cin, x1);
        cin>>x2;//getline(cin, x2);

        if(x1=="add")
            sinsert(root, x2);

        else{
            int p=finding(root, x2);
            printf("%d\n", p);
        }
    }

    return 0;
}
