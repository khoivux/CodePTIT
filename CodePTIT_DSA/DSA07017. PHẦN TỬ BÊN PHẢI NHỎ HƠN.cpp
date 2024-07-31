#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int a[100001];
int big[1000001], small[1000001];
int n;

void bigger()
{
     stack<int> st;
     for(int i = 1; i <= n; i++)
     {
          while(!st.empty() && a[i] > a[st.top()])
          {
               big[st.top()] = i; 
               st.pop();
          }
          st.push(i);
     }
     while(!st.empty())
     {
          big[st.top()] = -1;
          st.pop();
     }
}
void smaller()
{
     stack<int> st;
     for(int i = 1; i <= n; i++)
     {
          while(!st.empty() && a[i] < a[st.top()])
          {
               small[st.top()] = i;
               st.pop();
          }
          st.push(i);
     }
     while(!st.empty())
     {
          small[st.top()] = -1;
          st.pop();
     }
}
main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          cin >> n;
          for(int i = 1; i <= n; i++) cin >> a[i];
          bigger();
          smaller();
          for(int i = 1; i <= n; i++)
          {
               if(big[i] == -1) cout << -1;
               else 
               {
                    int id = small[big[i]];
                    if(id == -1) cout << -1;
                    else cout << a[id];
               }
               cout << " ";
          }
          cout << endl;
     }
}