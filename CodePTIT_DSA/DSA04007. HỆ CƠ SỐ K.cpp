#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string a, b;
        cin.ignore();
        cin >> a >> b;
        int n = max(a.length(), b.length());
        while(a.length() < n) a = '0' + a;
        while(b.length() < n) b = '0' + b;
        string res = "";
        int memo = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            int x = a[i] - '0', y = b[i] - '0';
            int t = x + y + memo;
            res = char(t % k + '0') + res;
            memo = t / k;
        }
        if(memo)
        {
            res = char(memo + '0') + res;
        }
        cout << res << endl;
    }
}