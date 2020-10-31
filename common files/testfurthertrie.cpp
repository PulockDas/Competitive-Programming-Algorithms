#include <bits/stdc++.h>
using namespace std;

int check=0;

const int ALPHABET_SIZE = 10;

// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];

    bool isEndOfWord;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;

    pNode->isEndOfWord = false;

    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
//        if(pCrawl->isEndOfWord)
//            check=1;
        int index = key[i] - '0';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    pCrawl->isEndOfWord = true;
}

//// Returns true if key presents in trie, else
//// false
//bool search(struct TrieNode *root, string key)
//{
//    struct TrieNode *pCrawl = root;
//
//    for (int i = 0; i < key.length(); i++)
//    {
//        int index = key[i] - 'a';
//        if (!pCrawl->children[index])
//            return false;
//            pCrawl = pCrawl->children[index];
//    }
//
//    return (pCrawl != NULL && pCrawl->isEndOfWord);
//}

// Driver
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        struct TrieNode *root=getNode();
        int n;
        scanf("%d", &n);
        string key[n];

        for(int i=0; i<n; i++){
            scanf("%s", key[i]);
            insert(root, key[i]);
        }


        if(check==1)
            printf("NO");
        else
            printf("YES");
        check=0;
        printf("\n");
    }



    return 0;
}
