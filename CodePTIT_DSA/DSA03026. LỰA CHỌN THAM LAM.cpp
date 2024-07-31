#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

string Max(int n, int s)
{
    string res(n, '0');
    for(int i = 0; i < n; i++)
    {
        res[i] += min(9, s);
        s -= min(s, 9);
        if(s == 0) break;
    }
    return res;
}

string Min(int n, int s)
{
    string res(n, '0');
    res[0] = '1'; s--;
    for(int i = n - 1; i >= 0; i--)
    {
        res[i] += min(9, s);
        s -= min(s, 9);
        if(s == 0) break;
    }
    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; t = 1;
    while(t--)
    {
           int n, s;
        cin >> n >> s;
        if(s <= 0 || s > 9 * n)
        {
            cout << -1 << " " << -1;
            continue;
        }
        cout << Min(n, s) << " " << Max(n, s);
        cout << endl;
    }
}