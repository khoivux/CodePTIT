#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    string s; cin >> s;
    stack<char> res;
    stack<char> tmp;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '<')
        {
            if(!res.empty())
            {
                tmp.push(res.top());
                res.pop();
            }
        }
        else if(s[i] == '>')
        {
            if(!tmp.empty())
            {
                res.push(tmp.top());
                tmp.pop();
            }
        }
        else if(s[i] == '-')
        {
            if(res.size())
            {
                res.pop();
            }
        }
        else {
            res.push(s[i]);
        }

    }   

    while(!res.empty())
    {
        tmp.push(res.top());
        res.pop();
    }
    while(!tmp.empty())
    {
        cout << tmp.top();
        tmp.pop();
    }
}