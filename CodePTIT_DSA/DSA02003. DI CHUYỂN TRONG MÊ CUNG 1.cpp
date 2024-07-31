#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n; 
int a[1000][1000];
int res = 0;
string s = "";
vector<string> v;
void Try(int i, int j)
{
    if(i == n && j == n)
    {
        res = 1;
        v.push_back(s);
        return;
    }
    if(i + 1 <= n && j <= n && a[i + 1][j] == 1)
    {
        s += "D";
        Try(i + 1, j);
        s.pop_back();
    }
    if(i <= n && j + 1 <= n && a[i][j + 1] == 1)
    {
        s += "R";
        Try(i, j + 1);
        s.pop_back();
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
        res = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        if(a[1][1] && a[n][n])
            Try(1, 1);

        if(res == 0) cout << -1;
        else
        {
            sort(v.begin(), v.end());
            for(auto it : v) cout << it << " ";
        }
        cout << endl;
    }
}