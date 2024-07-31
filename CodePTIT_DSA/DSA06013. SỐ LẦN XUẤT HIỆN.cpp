#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
       int n, k; cin >> n >> k;
       int a[n];
       int cnt = 0;
       for(int i = 0; i < n; i++)
       {
            cin >> a[i];
            if(a[i] == k) cnt++;
       }
       if(cnt == 0) cout << -1;
       else cout << cnt;
       cout << endl;
    }
}