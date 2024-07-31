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
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        stack<int> st;
        for(int i = 1; i <= n; i++)
        {
            while(!st.empty() && a[i] >= a[st.top()])
            {
                st.pop();
            }
            if(st.empty()) cout << i << " ";
            else cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}