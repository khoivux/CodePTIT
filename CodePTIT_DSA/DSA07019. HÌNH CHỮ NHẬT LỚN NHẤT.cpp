#include <bits/stdc++.h>
#define ll long long
#define ii pair<long, long>
using namespace std;
long n; 
long a[1000001];
long R[1000001], L[1000001];

void smaller_right(long res[])
{
     stack<long> st;
     for(long i = 0; i < n; i++)
     {
          while(!st.empty() && a[i] < a[st.top()])
          {
               res[st.top()] = i;
               st.pop();
          }
          st.push(i);
     }
     while(!st.empty())
     {
          res[st.top()] = n;
          st.pop();
     }
}
void smaller_left(long res[])
{
     stack<long> st;
     for(long i = n - 1; i >= 0; i--)
     {
          while(!st.empty() && a[i] < a[st.top()])
          {
               res[st.top()] = i;
               st.pop();
          }
          st.push(i);
     }
     while(!st.empty())
     {
          res[st.top()] = -1;
          st.pop();
     }
}
main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     long t; cin >> t;
     while(t--)
     {
          cin >> n;
          for(long i = 0; i < n; i++) cin >> a[i];
          smaller_left(L);
          smaller_right(R);
          long res = -1;
          for(long i = 0; i < n; i++)
          {
               res = max(res, a[i] * (R[i] - L[i] - 1));
          }
          cout << res << endl;
     }
}