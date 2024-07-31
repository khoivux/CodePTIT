#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << i + 1 << ": ";
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[i]) swap(a[i], a[j]);
        }
        for(auto &x : a) cout << x << " ";
        cout << endl;
    }
}