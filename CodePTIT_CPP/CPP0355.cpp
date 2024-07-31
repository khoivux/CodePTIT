 #include <bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
	stringstream ss(s);
	string tmp;
	string res = "";
	int ok = 1;
	while(ss >> tmp)
	{
		int n = tmp.size() - 1;
		if(tmp[n] == '.' || tmp[n] == '!' || tmp[n] == '?')
		{
			tmp.erase(n);
			res = res + tmp;
			cout << res << endl;
			res = "";
			ok = 1;
		}
		else if(ok == 1)
		{
			tmp[0] = toupper(tmp[0]);
			res = res + tmp + " ";
			ok = 0;
		}
		else
		{
			res = res + tmp + " ";
		}
	}
}