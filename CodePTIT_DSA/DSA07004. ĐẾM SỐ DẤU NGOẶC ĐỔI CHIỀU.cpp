#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

long solve(string s)
{
    stack<char> st;
    long res = 0;
    for(int i = 0; i < s.length(); i++)
    {
       if(s[i] == '(') st.push(s[i]);
       else 
       {
            if(st.empty())
            {
                res++;
                st.push('(');
            }
            else st.pop();
       }
    }
    if(!st.empty()) res += (st.size() / 2);
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
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}