#include <bits/stdc++.h>
using namespace std;

struct Time{
    int h, m, s;
};

int n;
Time a[5999];

bool cmp(Time a, Time b)
{
    if(a.h < b.h) return true;
    if(a.h == b.h)
    {
        if(a.m < b.m) return true;
        if(a.m == b.m)
        {
            if(a.s < b.s) return true;
        }
    }
    return false;
}
void input(Time &a)
{
    cin >> a.h >> a.m >> a.s;   
}

int main() 
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        input(a[i]);
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
}
