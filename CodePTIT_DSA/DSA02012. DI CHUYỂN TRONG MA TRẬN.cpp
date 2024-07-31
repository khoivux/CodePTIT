#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
int a[1000][1000];
int res = 0;

void Try(int i, int j)
{
    if(i == n && j == m)
    {
        res++;
        return;
    }
    if(i + 1 <= n && j <= m)
    {
        Try(i + 1, j);
    }
    if(i <= n && j + 1 <= m)
    {
        Try(i, j + 1);
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
        res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << res << endl;
    }
}