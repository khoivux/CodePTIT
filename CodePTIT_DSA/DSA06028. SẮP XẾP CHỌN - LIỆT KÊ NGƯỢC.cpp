#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> v;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        int id = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[id]) id = j;
        }
        swap(a[i], a[id]);
        v.push_back(a);
    }
    for(int j = v.size() - 1; j >= 0; j--)
    {
        cout << "Buoc " << j + 1 << ": ";
        for(auto it : v[j]) cout << it << " ";
            cout << endl;
    }
}