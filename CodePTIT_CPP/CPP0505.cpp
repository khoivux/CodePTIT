#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct NhanVien{

    string name, adr, date, sex, tax, day;
    string id = "00001";
};

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin, a.adr);
    cin >> a.tax >> a.day;
}

void xau(string a)
{
    if(a[1] == '/') a = '0' + a;
    for(int i = 0; i <a.length(); i++)
    {
        if(a[i - 1] == '/' && a[i + 1] == '/') cout <<0;
        cout << a[i];
    }
    cout << " ";
}
void in(NhanVien a)
{
    cout << a.id << " " << a.name << " ";
    cout << a.sex << " ";
    xau(a.date);
    cout << a.adr << " ";
    cout << a.tax << " ";
    xau(a.day);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}