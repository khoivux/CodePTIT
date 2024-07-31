#include <bits/stdc++.h>
#define ll long long

using namespace std;

void Tower(int n, char a, char b, char c)
{
    if(n == 1)
    {
         cout << a << " -> " << c << endl;
    }
    else
    {
        Tower(n - 1, a, c, b);
        Tower(1, a, b, c);
        Tower(n - 1, b, a, c);   
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    char a = 'A', b = 'B', c = 'C';
    Tower(n, a, b, c);
}