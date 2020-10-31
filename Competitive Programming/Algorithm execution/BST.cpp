#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

struct BSTNode
{
    ll data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* root = new BSTNode();

void BSTInsert(BSTNode* roo, ll num){
    if(roo == NULL){
        roo->data=num;
    }

    else if(num > roo->data){
        if(roo->right == NULL){
            BSTNode* temp = new BSTNode();
            roo->right = temp;
        } 
        BSTInsert(roo->right, num);
    }
    
    else{
        if(roo->left == NULL){
            BSTNode* temp = new BSTNode();
            roo->left = temp;
        } 
        BSTInsert(roo->left, num);
    }
}

void Delate(BSTNode* roo, ll num){
    if(roo == NULL){
        return;
    }

    else if(num == roo->data){
        if(roo->left=NULL && roo->right==NULL){
            
        }
    }
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    BSTInsert(root, 15);
    BSTInsert(root, 20);

    Delate(root, 15);

    





    return 0;
}