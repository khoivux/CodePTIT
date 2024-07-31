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
int isFull(node *root)
{
	if(root == NULL) return 1;
	if(root->left == NULL && root->right == NULL) return 1;

	if(root->left != NULL && root->right != NULL)
		return (isFull(root->left) && isFull(root->right));
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
		node *root = NULL;
		int n; cin >> n;
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
		cout << isFull(root) << endl;
	}	
}