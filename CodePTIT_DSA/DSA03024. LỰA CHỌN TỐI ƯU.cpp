#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

struct job
{
    int start, end;
};
bool cmp(job a, job b)
{
    return a.end < b.end;
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
        job a[n + 1];
        for(int i = 1; i <= n; i++)
        {
            int x, y; cin >> x >> y;
            a[i].start = x;
            a[i].end = y;
        }
        
        sort(a + 1, a + n + 1, cmp);
        int preEnd = 0;
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i].start >= preEnd)
            {
                res++;
                preEnd = a[i].end;
            }
        }  
        cout << res << endl; 
    }
}