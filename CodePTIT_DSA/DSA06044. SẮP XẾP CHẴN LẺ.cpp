#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; t = 1;
    while(t--)
    {
       int n; cin >> n;
       int a[n + 1];
       vector<int> c, l;
       for(int i = 1; i <= n; i++)
       {
          cin >> a[i];
          if(i % 2 == 0) c.push_back(a[i]);
          else l.push_back(a[i]);
       }
       sort(c.begin(), c.end(), greater<int>());
       sort(l.begin(), l.end());
       int i = 0, j = 0;
       while(i < l.size() && j < c.size())
       {
          cout << l[i] << " " << c[j] << " ";
          i++; j++;
       }
       if(i < l.size()) cout << l[i];
       cout << endl;
    }   
}