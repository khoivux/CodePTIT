#include <bits/stdc++.h>
#define long long long
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
        string s; cin >> s;
        stack<int> st;
        int cnt = 1;
        st.push(cnt);
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'D')
            {
                cnt++;
                st.push(cnt);
            }
            else 
            {
                while(!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                cnt++;
                st.push(cnt);
            }
        }
        while(!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}