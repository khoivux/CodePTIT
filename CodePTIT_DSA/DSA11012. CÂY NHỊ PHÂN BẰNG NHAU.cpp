#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

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
	if(root->data == u) make(root, u, v, c);
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}

int Equal(node *r1, node *r2)
{
	if(r1 == NULL && r2 == NULL) return 1;
	if(r1 != NULL && r2 != NULL)
	{
		if(r1->data == r2->data
			&& Equal(r1->left, r2->left)
			&& Equal(r1->right, r2->right))
				return 1;
		else 
		return 0;
	}
	else return 0;
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n, m;
		node *root1 = NULL;
		node *root2 = NULL;

		cin >> n;
		for(int i = 0; i < n; i++)
		{
			int u, v; char c;
			cin >> u >> v >> c;
			if(root1 == NULL)
			{
				root1 = new node(u);
				make(root1, u, v, c);
			}
			else insert(root1, u, v, c);
		}

		cin >> m;
		for(int i = 0; i < m; i++)
		{
			int u, v; char c;
			cin >> u >> v >> c;
			if(root2 == NULL)
			{
				root2 = new node(u);
				make(root2, u, v, c);
			}
			else insert(root2, u, v, c);
		}
		if(n == m)
			cout << Equal(root1, root2) << endl;
		else cout << 0 << endl;
	}	
}