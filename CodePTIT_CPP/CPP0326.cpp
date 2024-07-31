#include <bits/stdc++.h>
#define ll long long

using namespace std;
string solve(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int len = len1 + len2;
    vector<int> a, b;
    for(int i = 0; i < len1; i++) a.push_back(s1[i] - '0');
    for(int i = 0; i < len2; i++) b.push_back(s2[i] - '0');

    vector<vector<int>> res(len2);
    int index = 0;
    for(int i = len2 - 1; i >= 0; i--)
    {
        int x = 0;
        while(x < index)
        {
            res[index].push_back(0);
            x++;
        }
        int memo = 0, tmp = 0;
        for(int j = len1 - 1; j >= 0; j--)
        {
            tmp = a[j] * b[i] + memo;
            res[index].push_back(tmp % 10);
            memo = tmp / 10;
        }
        if(memo > 0) res[index].push_back(memo);

        while(res[index].size() < len)
        {
            res[index].push_back(0);
        }

        reverse(res[index].begin(), res[index].end());
        index++;
    }


    string ans = "";
    int memo = 0;
    for(int j = res[0].size() - 1; j >= 0; j--)
    {
        int tmp = memo;
        for(int i = 0; i < res.size(); i++)
                tmp += res[i][j];
        ans = char(tmp % 10 + '0') + ans;
        memo = tmp / 10;
    }

    if(memo > 0) ans = char(memo + '0') + ans;
    while(ans[0] == '0') ans.erase(ans.begin());

    return ans;
}
main()
{
    int t; cin >> t;
    while(t--)
    {
    string a, b;
    cin >> a >> b;
    cout << solve(a, b);
    cout << endl; 
    }
}