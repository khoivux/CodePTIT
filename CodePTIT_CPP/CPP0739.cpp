#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
                string s; cin >> s;
                stack<int> st;
                int cnt = 1;
                st.push(1);

                for(int i = 0; i < s.length(); i++)
                {
                        if(s[i] == 'I')
                        {
                                while(!st.empty())
                                {
                                        cout << st.top();
                                        st.pop();
                                }
                        }
                        cnt++;
                        st.push(cnt);
                }
                while(!st.empty())
                {
                        cout << st.top();
                        st.pop();
                }
                cout << endl;
        }
}