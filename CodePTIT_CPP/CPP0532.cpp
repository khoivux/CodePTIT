#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
};
int n;
Point ds[1999];

void solve()
{
    double s = 0;
    for(int i = 2; i <= n - 1; i++)
    {
        s += 0.5 * abs((ds[i].x - ds[1].x)*(ds[i + 1].y - ds[1].y) - (ds[i + 1].x - ds[1].x)*(ds[i].y - ds[1].y));
    }
    cout << fixed << setprecision(3) << s;
    cout << endl;
}

int main() {
    int t; cin >> t;
   
    while(t--)
    {

        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> ds[i].x >> ds[i].y;
        }
        solve();
    }
}
