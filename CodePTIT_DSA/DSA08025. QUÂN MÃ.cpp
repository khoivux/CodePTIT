#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int s, t, u, v;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int d[10][10];

void solve()
{
    memset(d, -1, sizeof(d));
	queue<ii> q;
	q.push({s, t});
    d[s][t] = 0;
	int res = 0;
	while(!q.empty())
	{
		int i = q.front().first, j = q.front().second;
		q.pop();
		if(i == u && j == v)
		{
			res = d[i][j]; 
            break;
		}
		for(int k = 0; k < 8; k++)
		{
			int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1 >= 1 && j1 >= 1 && i1 <= 8 && j1 <= 8 && d[i1][j1] == -1)
            {
                q.push({i1, j1});
                d[i1][j1] = d[i][j] + 1;
            }
		}
	}
	cout << res << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int test; cin >> test;
   	while(test--)
    {
    	string s1, s2; cin >> s1 >> s2;
       s = 9 - (s1[1] - '0');
       t = (s1[0] - 'a') + 1;
       u = 9 -  (s2[1] - '0');
       v = (s2[0] - 'a') + 1;
       solve();
       
    }   
}
