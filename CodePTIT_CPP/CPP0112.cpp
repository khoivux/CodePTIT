#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, x;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    int t1 = abs(a.first - x), t2 = abs(b.first - x);
    if(t1 == t2) return a.second < b.second;
    else return t1 < t2;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++)
        {
            int a; cin >> a;
            v.push_back({a, i});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto it : v) cout << it.first << " ";
            cout << endl;
    }   
}