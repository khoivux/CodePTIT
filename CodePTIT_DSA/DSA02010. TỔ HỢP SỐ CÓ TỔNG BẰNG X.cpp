#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, x;
int a[1000];
int sum = 0;
vector<vector<int>> v;
vector<int> tmp;


void Try(int pos)
{
    for(int j = pos; j <= n; j++)
    {
        if(sum + a[j] <= x)
        {
            sum += a[j];
            tmp.push_back(a[j]);
        
            if(sum == x) v.push_back(tmp);
            Try(j);
        
            tmp.pop_back();
            sum -= a[j];
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        v.clear();
        tmp.clear();
        cin >> n >> x;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1);
        if(v.size() == 0) cout << -1;
        else
        {  
            for(auto it : v)
            {
                sort(it.begin(), it.end());
                cout << "[";
                for(int k = 0; k < it.size(); k++)
                {
                    cout << it[k];
                    if(k < it.size() - 1) cout << " ";
                    else cout << "]";
                }
            }
        }
        cout << endl;
    }
}