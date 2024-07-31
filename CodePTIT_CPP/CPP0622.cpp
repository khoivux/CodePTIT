#include <bits/stdc++.h>
#define ll long long

using namespace std;

class SinhVien
{
	public :
		string ma, ten, lop, mail;

		friend istream &operator >> (istream &in, SinhVien &a)
		{
			getline(in, a.ma);
			getline(in, a.ten);
			getline(in, a.lop);
			getline(in, a.mail);
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a)
		{
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.mail;
			out << endl;
			return out;
		}
};

main()
{

	int n; cin >> n;

	cin.ignore();
	SinhVien ds[1000];
	for(int i = 0; i < n; i++) cin >> ds[i];

	int q; cin >> q;
	while(q--)
	{
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(int i = 0; i < n; i++)
		{
			if(ds[i].lop == s) cout << ds[i];
		}
	}
}