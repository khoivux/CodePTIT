#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

set<int> se;
struct node
{
	int data;
	node *left;
	node *right;
	node (int x)
	{
		data = x;
		left = right = NULL;
	}
};

void make(node *root, int u, int v, char c)
{
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insert(node *root, int u, int v, char c)
{
	if(root == NULL) return;
	if(root->data == u)
		make(root, u, v, c);
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}

void solve(node *root, int cnt)
{
	if(root == NULL) return;
	if(root->left == NULL && root->right == NULL)
	{
		se.insert(cnt);
		return;
	}
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
		node *root = NULL;
		int n; cin >> n;
		se.clear();
		for(int i = 0; i < n; i++)
		{
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL) 
			{
				root = new node(u);
				make(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		solve(root, 1);
		if(se.size() == 1) cout << 1; 
		else cout << 0;
		cout << endl;
	}
}