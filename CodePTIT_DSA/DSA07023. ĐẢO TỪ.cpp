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
    cin.ignore();
    while(t--)
    {
        string s;
        stack<string> st;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            st.push(tmp);
        }
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}