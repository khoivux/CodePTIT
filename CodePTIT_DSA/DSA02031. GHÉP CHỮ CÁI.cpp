#include <bits/stdc++.h>
#define ll long long

using namespace std;

char c;
int n;
string res = "";
string s = "ABCDEFGH";
bool visited[10000];

bool isTrue(string s)
{
    for(int i = 1; i < s.length() - 1; i++)
    {
        if(s[i] == 'A' || s[i] == 'E')
        {

            if(s[i + 1] != 'A' && s[i + 1] != 'E')
            {
                if(s[i - 1] != 'A' && s[i - 1] != 'E')
                        return false;
            }
        }
    }
    return true;
}

void Try(int i)
{
    for(int j = 0; j < n; j++)
    {
        if(!visited[j])
        {
            res += s[j];
            visited[j] = true;
            if(i == n)
            {
                if(isTrue(res))
                    cout << res << endl;
            }
            else Try(i + 1);
            visited[j] = false;
            res.pop_back();
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> c;
    n = c - 'A' + 1;
    Try(1);
}