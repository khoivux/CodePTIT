#include <bits/stdc++.h>
#define ll long long

using namespace std;
class SinhVien{
    private:
        string msv, name, clas, day;
        float gpa;
    public:
        void nhap();
        void xuat();
};
void SinhVien::nhap()
{
    msv = "B20DCCN001";
    getline(cin, name);
    getline(cin, clas);
    getline(cin, day);
    cin >> gpa;
    if(day[2] != '/') day = "0" + day;
    if(day[5] != '/') day.insert(3, "0");
}
void SinhVien::xuat()
{
    cout << msv << " " << name << " " << clas << " " << day << " " << fixed << setprecision(2) << gpa;
}
main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}