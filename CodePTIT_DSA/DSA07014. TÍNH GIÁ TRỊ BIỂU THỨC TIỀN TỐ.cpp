#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

void solve(string s)
{
    stack<long> st;
    for(int i = s.length() - 1; i >= 0; i--)
    {
       if(isdigit(s[i]))
       {
            st.push(s[i] - '0');
       }
       else 
       {
            long t1 = st.top(); st.pop();
            long t2 = st.top(); st.pop();
            long t;
            if(s[i] == '+') t = t1 + t2;
            if(s[i] == '*') t = t1 * t2;
            if(s[i] == '-') t = t1 - t2;
            if(s[i] == '/') t = t1 / t2;
            st.push(t);
        }
    }
    cout << st.top() << endl;
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
        solve(s);
    }
}