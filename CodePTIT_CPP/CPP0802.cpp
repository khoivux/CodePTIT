#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll res = 0;
void solve(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '-') continue;
        if(!isdigit(s[i])) return;
    }

    bool isNeg = 0;
    if(s[0] == '-')
    {
        s.erase(0, 1);
        isNeg = 1;
    }
    if(s.length() > 10) return;
    ll num = 0;
    for(int i = 0; i < s.length(); i++)
            num = num * 10 + (s[i] - '0');

    if(isNeg) num = -num;
    if(num >= INT_MIN && num <= INT_MAX) res += num;
}
main()
{
 
    ifstream input;
    input.open("DATA.in");

    string s;
    while(input >> s)
    {
        solve(s);
    }
    cout << res;
}