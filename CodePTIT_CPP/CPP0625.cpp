#include <bits/stdc++.h>
#define ll long long

using namespace std;
int cnt = 0;
string subject(string s)
{
	stringstream ss(s);
	string tmp;
	string res = "";
	while(ss >> tmp)
	{
		res += toupper(tmp[0]);
	}
	return res;
}
string tenGV(string s)
{
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp)
	{
		v.push_back(tmp);
	}
	return v[v.size() - 1];
}
string maGV()
{
	cnt++;
	string s;
	if(cnt < 10) s = "GV0" + to_string(cnt);
	else s = "GV" + to_string(cnt);
	return s;
}
class GiangVien
{
	public : 
		string ma, ten, mon, Ten;
		friend istream& operator >> (istream& in, GiangVien &a)
		{
			getline(in, a.ten);
			getline(in, a.mon);
			a.Ten = tenGV(a.ten);
			a.mon = subject(a.mon);
			a.ma = maGV();
			return in;
		}
		friend ostream& operator << (ostream& out, GiangVien a)
		{
			out << a.ma << " " << a.ten << " " << a.mon << endl;
			return out;
		}
};
bool cmp(GiangVien a, GiangVien b)
{
	if(a.Ten == b.Ten) return a.ma < b.ma;
	else return a.Ten < b.Ten;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	cin.ignore();
	GiangVien ds[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ds[i]; 
	}
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++) cout << ds[i];
}