#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
    {
        int n, m, l;
        vector<int> v;
        cin >> n >> m >> l;
        int a[n], b[m], c[l];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < l; i++) cin >> c[i];

        int i = 0, j = 0, k = 0;
        while(i < n && j < m && k < l)
        {
            if(a[i] == b[j] && b[j] == c[k])
            {
                v.push_back(a[i]);
                i++; j++; k++;
                continue;
            }

            if(a[i] >= b[j])
            {
                if(b[j] >= c[k])
                {
                    k++;
                }
                else j++;
            }
            else i++;
        }
        if(!v.size()) cout << "NO";
        for(auto it : v) cout << it << " ";
            cout << endl;
    }
}