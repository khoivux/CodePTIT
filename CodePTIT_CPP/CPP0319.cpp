#include <bits/stdc++.h>
using namespace std;
int Max[500 + 5] = {0};
int Min[500 + 5] = {0};
void doMax(int m, int s)
{
	for(int i = 0; i < m; i++)
	{

		if(s > 9)
		{
			Max[i] = 9;
			s -= 9;
		}
		else 
		{
			Max[i] += s;	
			return;
		}	
	}
}
void doMin(int m, int s)
{
	s--;
	Min[m - 1] = 1;
	for(int i = 0; i < m; i++)
	{
		if(s <= 9)
		{
			Min[i] += s;
			return;
		}
		else
		{
			Min[i] = 9;
			s-=9;
		}
	}
}
main()
{
	int m, s;
	cin >> m >> s;
	
	if (s <= 0 || s > 9 * m)
	  {
	  	cout << "-1 -1";
	  	return 0;
	  }
        
	doMin(m, s);
	doMax(m, s);
	
	for(int i = m - 1; i >= 0; i--) cout << Min[i];
	cout << " ";
	for(int i = 0; i < m; i++) cout << Max[i];
	
}