#include <bits/stdc++.h>
#define ll long long

using namespace std;
int x; 
vector<pair<int, int>> a;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (abs(x - a.first) == abs(x - b.first))
        return a.second < b.second;
    return abs(x - a.first) < abs(x - b.first);
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n >> x;
        a.resize(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), cmp);
        for(int i = 0; i < n; i++) cout << a[i].first << " ";
            cout << endl;
    }
}