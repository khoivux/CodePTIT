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
        string s; cin >> s;
        string res = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(i == 0) res += s[i];
            else
            {
                if(s[i] == '0') res += res[i - 1];
                else
                {
                    if(res[i - 1] == '1') res += "0";
                    else res += "1";
                }
            }
        }
        cout << res << endl;
    }
}