#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

void solve(string s)
{
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--)
    {
       if(isalpha(s[i])) st.push(string(1, s[i]));
       else 
       {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string t = t1  + t2 + s[i];
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