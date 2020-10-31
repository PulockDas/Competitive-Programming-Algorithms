#include <bits/stdc++.h>
using namespace std;

const int alpha_size = 26;

struct Trienode{
    struct Trienode *children[alpha_size];
    bool isendofword;
};

struct Trienode *getnode(){
    struct Trienode *pnode = new Trienode;
    pnode->isendofword = false;

    return pnode;
}

void insert(struct Trienode *root, string key){
    struct Trienode *pCrawl = root;

    for(int i=0; i<key.length(); i++){
        int index = key[i] - 'a';

        if(!pCrawl->children[index])
            pCrawl->children[index] = getnode();

        pCrawl = pCrawl->children[index];
    }

    pCrawl->isendofword = true;
}

bool search(struct Trienode *root, string key){
    struct Trienode *pCrawl = root;

    for(int i=0; i<key.length(); i++){
        int index = key[i] - 'a';

        if(!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return pCrawl->isendofword;
}

int main ()
{
    string keys[]={"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);

    struct Trienode *root;
    root = getnode();

    for(int i=0; i<n; i++)
        insert(root, keys[i]);

    search(root, "the")? cout << "YES\n" :
                            cout << "NO\n";

    search(root, "these")? cout << "YES\n" :
                            cout << "NO\n";

    return 0;
}
