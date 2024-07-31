#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int l, r;
set<int> se;
bool used[1000];
void Try(int x)
{
    for(int j = 0; j <= 5; j++)
    {
         if(!used[j])
         {
            int s = x * 10 + j;
            used[j] = true;
            if(s > r) 
            {
                used[j] = false;
                return;
            }
            else if(s >= l && s <= r) 
                se.insert(s);
            Try(s);
            used[j] = false;
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
        memset(used, false, sizeof(used));
        if(used[3]) cout << "co";
        cin >> l >> r;
        se.clear();
        Try(0);
        cout << se.size() << endl;
    }
}