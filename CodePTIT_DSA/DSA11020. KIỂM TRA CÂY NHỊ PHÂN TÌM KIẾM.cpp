#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;


 bool cmp(int a, int b)
 {
    return a <= b;
 }

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        if(is_sorted(v.begin(), v.end(), cmp)) cout << 1;
        else cout << 0;
        cout << endl;
    }
}