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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(a[0] == a[n - 1]) cout << -1;
        else 
        {
            cout << a[0] << " ";
            int i = 0;
            while(a[i] == a[0]) i++;
            cout << a[i];
        }
        cout << endl;
    }
}