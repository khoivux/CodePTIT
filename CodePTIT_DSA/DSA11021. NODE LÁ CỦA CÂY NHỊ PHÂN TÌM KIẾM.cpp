#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

struct node 
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void insert(node *root, int x)
{
    if(x < root->data)
    {
        if(root->left) insert(root->left, x);
        else root->left = new node(x);
    }
    else 
    {
        if(root->right) insert(root->right, x);
        else root->right = new node(x);
    }
}

void solve(node *root)
{
    if(!root) return;

    if(!root->left && !root->right)
    {
        cout << root->data << " "; 
        return;
    }
    solve(root->left);
    solve(root->right);

}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        node *root = NULL;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(i == 0) root = new node(x);
            else insert(root, x);
        }
        solve(root);
        cout << endl;
    }
}