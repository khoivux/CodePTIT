#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y, z;
};
Point A, B, C, D;

void input(Point &pp) {
    cin >> pp.x >> pp.y >> pp.z;
}

Point makeVector(Point A, Point B)
{
    Point AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    AB.z = B.z - A.z;
    return AB;
}

void solve()
{
    Point AB = makeVector(A, B);
    Point AC = makeVector(A, C);
    Point AD = makeVector(A, D);

    Point ABAC;
    ABAC.x = AB.y * AC.z - AB.z * AC.y;
    ABAC.y = AB.z * AC.x - AB.x * AC.z;
    ABAC.z = AB.x * AC.y - AB.y * AC.x;

    int res = ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z;
    if(res == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int n;
    cin >> n;
    while(n--)
    {
        input(A); input(B); input(C); input(D);
        solve();
    }
}
