#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    stack<int> st;
    string s;
    while(getline(cin, s))
    {        
        if(s == "pop" && !st.empty()) st.pop();
        else if(s[0] == 'p' && s[1] != 'o')
        {
            int x = 0; 
            for(int i = 5; i < s.size(); i++)
            {
                x = x * 10 + (s[i] - '0');
            }
            st.push(x);
        }
        else if(s == "show")
        {
            if(st.empty())
            {
                cout << "empty" << endl;
                continue;
            }
            vector<int> v;
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(), v.end());
            for(int it : v) cout << it << " ";
            cout << endl;
        }
    }
}