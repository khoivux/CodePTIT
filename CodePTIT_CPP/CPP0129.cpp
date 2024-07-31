#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(int N, int p)
{
    int tmp = 1;
    int res = 0;
    while(pow(p, tmp) <= N)
    {
        res += N / pow(p, tmp);
        tmp++;
    }
    return res;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        int N, p; cin >> N >> p;
        cout << solve(N, p) << endl;
    }   
}