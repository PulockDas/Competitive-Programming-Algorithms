#include <bits/stdc++.h>
using namespace std;

const int alphabet = 26;


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

void sinsert(struct Trienode *root, string x){
    struct Trienode *pCrawl=root;
    int l=x.length();

    for(int i=0; i<l; i++){
        int in=x[i]-'a';
        if(!pCrawl->child[in])
            pCrawl->child[in]=getnode();
        pCrawl=pCrawl->child[in];
    }

    pCrawl->isendofword=true;
}

bool ssearch(struct Trienode *root, string x){
    struct Trienode *pCrawl=root;
    int l=x.length();
    for(int i=0; i<l; i++){
        int in=x[i]-'a';
        if(!pCrawl->child[in])
            return false;
        pCrawl=pCrawl->child[in];
    }
    return (pCrawl!=NULL && pCrawl->isendofword);
}

int main ()
{
    string keys[]={"souhardya", "mubin", "ranak", "emon", "rumi", "shaswata"};
    int l=sizeof(keys)/sizeof(keys[0]);

    struct Trienode *root=getnode();

    for(int i=0; i<l; i++)
        sinsert(root, keys[i]);

    if(ssearch(root, "mubin"))
        cout<<"ase\n";
    else
        cout<<"NO\n";

    if(ssearch(root, "mub"))
        cout<<"ase\n";
    else
        cout<<"NO\n";

    return 0;
}
