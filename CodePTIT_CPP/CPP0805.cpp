#include <bits/stdc++.h>
#define ll long long

using namespace std;
set <string> se1;
set <string> se2;
set <string> sumSet;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ifstream input1;
    input1.open("DATA1.in");
    string s;
    while(input1 >> s)
    {
        for(char &x : s) x = tolower(x);
        se1.insert(s);
        sumSet.insert(s);
    }

    input1.close();

    ifstream input2;
    input2.open("DATA2.in");
    while(input2 >> s)
    {   
        for(char &x : s) x = tolower(x);
        se2.insert(s);
        sumSet.insert(s);
    }
    for(auto it : sumSet) cout << it << " ";
        cout << endl;
    for(auto it : se1)
    {
        if(se2.count(it)) cout << it << " ";
    }
}