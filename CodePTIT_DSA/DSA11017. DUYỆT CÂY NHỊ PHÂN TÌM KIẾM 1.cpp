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
void show(node *root)
{
    if(root == NULL) return;
    else
    {
        show(root->left);
        show(root->right);
        cout << root->data << " ";
    }
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
            int a; cin >> a;
            if(i == 0) root = new node(a);
            else
            insert(root, a);
        }
        show(root);
        cout << endl;
    }
}