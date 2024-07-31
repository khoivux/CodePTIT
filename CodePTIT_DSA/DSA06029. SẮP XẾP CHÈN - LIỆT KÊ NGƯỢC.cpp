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
    vector<vector<int>> v;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        int tmp = a[i];
        int pos = i - 1;
        while(pos >= 0 && tmp < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = tmp;
        
        vector<int> x;
        for(int j = 0; j <= i; j++)
        {
            x.push_back(a[j]);
        }
        v.push_back(x);
    }
    
    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i << ": ";
        for(auto it : v[i]) cout << it << " ";
            cout << endl;
    }
}