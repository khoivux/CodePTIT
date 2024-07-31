#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(string s)
{
    ll res = 0;
    for(int i = 0; i < s.length(); i++)
    {
        res = res * 2 + char(s[i] - '0');
    }
    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        cout << solve(a) * solve(b) << endl;
    }
}