#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool Chinh[1000], Phu[1000];
int n, cnt = 0;
int a[1000];
/*
    Đường chéo chính i - j + n
    Đường chéo phụ i + j - 1
*/
void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!Chinh[i - j + n] && !Phu[i + j - 1] && !a[j])
        {
            Chinh[i - j + n] = true;
            Phu[i + j - 1] = true;
            a[j] = 1;

            if(i == n) cnt++;
            else Try(i + 1);

            a[j] = 0;
            Chinh[i - j + n] = false;
            Phu[i + j - 1] = false;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        memset(Chinh, false, 1000);
        memset(Phu, false, 1000);
        memset(a, 0, sizeof(a));
        cnt = 0;
        cin >> n;
        Try(1);
        cout << cnt << endl;
    }
}