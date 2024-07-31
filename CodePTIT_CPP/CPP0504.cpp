#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct SinhVien{
	float gpa;
	string name, lop, date;
	string id = "B20DCCN001";
};

void nhap(SinhVien &a)
{
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.date);
	cin >> a.gpa;
}


void in(SinhVien a)
{
	cout << a.id << " " << a.name << " " <<a.lop <<" " ;
	if(a.date[1] == '/') a.date = '0' + a.date;
	for(int i = 0; i <a.date.length(); i++)
	{
		if(a.date[i - 1] == '/' && a.date[i + 1] == '/') cout <<0;
		cout << a.date[i];
	}
	cout << " ";
	cout << fixed << setprecision(2) << a.gpa;
}
int main() {
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}