#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

string toMax(string s)
{    
     string res = "";
     for(int i = 0; i < s.length(); i++)
     {
          if(s[i] == '5') res += '6';
          else res += s[i];
     }
     return res;
}
string toMin(string s)
{
     string res = "";
     for(int i = 0; i < s.length(); i++)
     {
          if(s[i] == '6') res += '5';
          else res += s[i];
     }
     return res;
}
main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     string a, b; cin >> a >> b;
     int Min = stoi(toMin(a)) + stoi(toMin(b));
     int Max = stoi(toMax(a)) + stoi(toMax(b));
     cout << Min << " " << Max;
}