#include <bits/stdc++.h>
#define ll long long

using namespace std;
set<int> se1;
set<int> se2;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ifstream input;
    input.open("DATA.in");
    int n, m, a;
    input >> n >> m;
    for(int i = 0; i < n; i++)
    {
        input >> a;
        se1.insert(a);
    }   
    for(int i = 0; i < m; i++)
    {
        input >> a;
        se2.insert(a);
    }
    for(auto it : se1)
    {
        if(se2.count(it)) cout << it << " ";
    }
}
