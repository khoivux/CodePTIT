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
        vector<int> a(n);
        vector<vector<int>> v;
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 1; i < n; i++)
        {
            bool check = true;
            for(int j = 0; j < n - i; j++)
            {
                if(a[j] > a[j + 1]) 
                {
                    swap(a[j + 1], a[j]);
                    check = false;
                }
            }
            if(check) break;
            v.push_back(a);
        }
        for(int i = v.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for(auto it : v[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}