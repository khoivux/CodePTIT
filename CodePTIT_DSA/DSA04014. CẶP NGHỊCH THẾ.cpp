#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll merge(ll a[], ll l, ll r, ll m)
{
     vector<ll> L(a + l,a + m + 1);
     vector<ll> R(a + m + 1,a + r + 1);

     ll i = 0, j = 0, k = l;
     ll cnt = 0;
     ll n1 = L.size(), n2 = R.size();
     while(i < n1 && j < n2)
     {
          if(L[i] <= R[j])
          {
               a[k++] = L[i++];
          }
          else
          {
               a[k++] = R[j++];
               cnt = cnt + n1 - i;
          }
     }
     while(i < n1) a[k++] = L[i++];
     while(j < n2) a[k++] = R[j++];
     return cnt;
}

ll mergeSort(ll a[], ll l, ll r)
{
     if(l >= r) return 0;
     ll res = 0;
     ll m = (l + r) / 2;
     res += mergeSort(a, m + 1, r);
     res += mergeSort(a, l, m);
     res += merge(a, l, r, m);
     return res;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     ll t; cin >> t;
     while(t--)
     {
          ll n; cin >> n;
          ll a[n];
          for(ll i = 0; i < n; i++) cin >> a[i];
          cout << mergeSort(a, 0, n - 1) << endl;
     }
}