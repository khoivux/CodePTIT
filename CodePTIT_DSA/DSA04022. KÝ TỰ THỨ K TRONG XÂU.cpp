#include <bits/stdc++.h>
#define ll long long

using namespace std;
int len[1999];
int solve(int n, int k)
{
     int t = len[n] / 2 + 1;
     if(k == t) return n;
     if(k > t) return solve(n - 1, k - t);
     else return solve(n - 1, k);
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     len[1] = 1;
     for(int i = 2; i <= 25; i++) len[i] = len[i - 1] * 2 + 1;
     int t; cin >> t;
     while(t--)
     {
          int n, k;
          cin >> n >> k;
          char res = solve(n, k) - 1 + 'A';
          cout << res << endl;
     }
}