#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string name, date;
	float x, y, z;
};

void nhap(ThiSinh& A)
{
	getline(cin, A.name);
	getline(cin , A.date);
	cin >> A.x >> A.y >> A.z;
}
void in(ThiSinh A)
{
	cout << A.name << " ";
	cout << A.date << " ";
	cout << fixed << setprecision(1) << A.x + A.y + A.z;
}int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}