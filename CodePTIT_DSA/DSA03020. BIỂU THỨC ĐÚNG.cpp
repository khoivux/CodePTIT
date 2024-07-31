#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

string s;
void solve()
{
     stack<int> st;
     int res = 0;
     for(int i  = 0; i < s.length(); i++)
     {
          if(s[i] == '[')
          {
               st.push(i);
          }
          else if(!st.empty())
          {
               st.pop();
          }
          else
          {
               int j = i;
               while(s[j] == ']') j++;
               swap(s[i], s[j]);
               res += j - i;
               st.push(i);
          }
     }
     cout << res << endl;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          cin >> s;
          solve();
     }
}