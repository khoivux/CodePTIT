#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int cnt = 0;
vector<vector<int>> level;
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
void makeRoot(node *root, int u, int v, char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c)
{
    if(root == NULL) return;
    if(root->data == u)
    {
        makeRoot(root, u, v, c);
    }
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}
void solve(node *root, int cnt)
{
    if(root == NULL) return;
    level[cnt].push_back(root->data);
    solve(root->left, cnt + 1);
    solve(root->right, cnt + 1);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        level.clear(); level.resize(10010);
 
        node *root = NULL;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            int u, v; char c;
            cin >> u >> v >> c;
            if(root == NULL)
            {
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else insertNode(root, u, v, c);
        }
        solve(root, cnt + 1);
        for(auto lv : level)
        {
            for(auto x : lv)
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
}