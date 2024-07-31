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
       int n; cin >> n;
       set<int> se;
       int a[n];
       int cnt = 0;
       for(int i = 0; i < n; i++)
       {
            cin >> a[i];
            se.insert(a[i]);
       }
       sort(a, a + n);
       int  l = a[0], r = a[n - 1];
       for(int i = l; i < r; i++)
       {
            if(se.count(i) == 0) cnt++;
       }
       cout << cnt << endl;
    }
}