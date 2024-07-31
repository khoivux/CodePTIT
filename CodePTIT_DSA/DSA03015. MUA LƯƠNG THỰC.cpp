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
        int n, m, s;
        cin >> n >> s >> m;
        int sum = s * m;
        int day = sum / n;
        if(day * n != sum) day++;
        if(day > s - (s / 7)) cout << -1;
        else cout << day;
        cout << endl;
    }   
}