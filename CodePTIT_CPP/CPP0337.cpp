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
        string s;
        cin >> s;
        int dem[1000] = {0};
        int cnt = 0;
        for(char x : s)
        {
            dem[x]++;
            if(dem[x] == 1) cnt++;
        }

        int x, y;
        int cnt2 = 0;
        int len = 1e9;
        int r = 0, l = 0;
        int d[1000] = {0};
        while(r < s.length())
        {
            d[s[r]]++;
            if(d[s[r]] == 1) cnt2++;
            if(cnt2 == cnt)
            {
                while(1)
                {
                    if(d[s[l]] - 1 >= 1)
                    {
                        d[s[l]]--;
                        l++;
                    }
                    else break;
                }
                if(r - l + 1 < len)
                {
                    len  = r - l + 1;
                    x = l;
                    y = r;
                }
            }
            r++;

        }
        cout << len << endl;
    }
}