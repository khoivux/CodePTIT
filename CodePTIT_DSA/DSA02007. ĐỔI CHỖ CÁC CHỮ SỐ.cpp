#include <bits/stdc++.h>
#define ll long long

using namespace std;

int k;
string s;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        cin >> k >> s;
        for(int i = 0; i < s.length(); i++)
        {
            if(k == 0) break;
            char c = s[i];
            int id = i;
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[j] > c)
                {
                    c = s[j];
                    id = j;
                }
            }
            if(id == i) continue;

            string res = s;
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[j] == c)
                {
                    string tmp = s;
                    swap(tmp[i], tmp[j]);
                    res = max(res, tmp);
                }
            }
            s = res;
            k--;
        }
        cout << s << endl;
    }
}