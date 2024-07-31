#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
int a[1000][1000];
int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

void DFS(int i, int j)
{
    a[i][j] = 0;
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if(a[i1][j1] && i1 <= n && j1 <= m && i1 > 0 && j1 > 0)
        {
            DFS(i1, j1);
        }
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
        int res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(a[i][j])
                {
                    res++;
                    DFS(i, j);
                }
            }
        }
        cout << res << endl;
    }   
}