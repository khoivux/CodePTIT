#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        int s, d; cin >> s >> d;
        string res = "";
        int ok = 1;
        if(s > 9 * d) ok = 0;
        while(d-- && s > 9)
        {
            res = char(9 + '0') + res;
            s -= 9;
        }

        if(d == 0) 
            res = char(s + '0') + res;
        else 
        {
            int t = s - 1;
            s--;
            d--;
            res = char(t + '0') + res;
            while(d > 0)
            {
                res = '0' + res;
                d--;
            }
            res = '1' + res;
        }

        if(ok)
            cout << res << endl;
        else 
            cout << -1 << endl;
    }   
}