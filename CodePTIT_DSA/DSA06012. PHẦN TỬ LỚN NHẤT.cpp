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
       for(int i = 0; i < n; i++)
       {
            cin >> a[i];
       }
       sort(a, a + n, greater<int>());
       for(int i = 0; i < k; i++) cout << a[i] << " ";
        cout << endl;
    }
}