#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll solve(string s, int n)
{
    ll res = 0;
    for(int i = 0; i < s.length(); i++)
    {
        ll tmp = 0;
        for(int j = i; j < s.length(); j++)
        {
            tmp = tmp * 10 + (s[j] - '0');
            tmp %= n;
            if(tmp == 0) res++;
        }
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
        string s;
        cin >> s;
        cout << solve(s, 8) - solve(s, 24)<< endl;
    }
}