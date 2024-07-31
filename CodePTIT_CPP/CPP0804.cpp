#include <bits/stdc++.h>
#define ll long long

using namespace std;
set <string> se;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ifstream input;
    input.open("VANBAN.in");

    string s;
    while(input >> s)
    {
        for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]); 
        se.insert(s);
    }
    for(auto it : se) cout << it << endl;
}