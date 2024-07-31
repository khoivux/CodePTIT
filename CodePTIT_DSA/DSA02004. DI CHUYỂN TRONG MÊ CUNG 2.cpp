#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int a[1000][1000];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
string c = "DRLU";
string s;
vector<string> v;

void Try(int x, int y)
{
    if(x == n && y == n)
    {
        v.push_back(s);
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        int x1 = x + dx[i], y1 = y + dy[i];
        
        if(x1 <= n && y1 <= n && x1 >= 1 && y1 >= 1 && a[x1][y1])
        {
            s += c[i];
            a[x1][y1] = 0;
            Try(x1, y1);
            s.pop_back();
            a[x1][y1] = 1;
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
        v.clear();
        s = "";
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }

        if (a[1][1] == 0 || a[n][n] == 0) 
        {
            cout << -1 << endl;
            continue;
        }

        a[1][1] = 0;
        Try(1, 1);

        if (v.empty())
        {
            cout << -1 << endl;
            continue;
        }

        sort(v.begin(), v.end());
        for (auto x : v) 
        {
            cout << x << " ";
        }
        cout << endl;
    }
}