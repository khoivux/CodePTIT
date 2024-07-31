#include<bits/stdc++.h>
using namespace std;

string ma1 = "ABBADCCABDCCABD";
string ma2 = "ACCABCDDBBCDDBB";
int check(int ma, char s[])
{
	int res = 0;
	if(ma == 101)
	{
		for(int i = 0; i < ma1.length(); i++)
		{
			if(s[i] == ma1[i]) res++;
		}
	}
	else
	{
		for(int i = 0; i < ma2.length(); i++)
		{
			if(s[i] == ma2[i]) res++;
		}
	}
	return res;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{

		int ma;
		cin >> ma;
		char s[100];
		for(int i = 0; i < 15; i++) cin >> s[i];
		
		double res;
		res = 1.0 * 10 * check(ma, s) / 15;
		cout << setprecision(2) << fixed << res << endl;
	}
}