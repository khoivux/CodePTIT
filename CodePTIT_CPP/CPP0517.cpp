#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct NhanVien
{
    string name;
    string sex;
    string bd;
    string adress;
    string tax;
    string date;
};
string id(int i)
{
    string res = to_string(i);
    while(res.length() < 5)
    {
        res = '0' + res;
    }
    return res;
}
void nhap(NhanVien &nv)
{
    scanf("\n");
    getline(cin, nv.name);
    getline(cin, nv.sex);
    getline(cin, nv.bd);
    getline(cin, nv.adress);
    getline(cin, nv.tax);
    getline(cin, nv.date);
}
void inds(NhanVien ds[],int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << id(i + 1) << " ";
        cout << ds[i].name << " ";
        cout << ds[i].sex << " ";
        cout << ds[i].bd << " ";
        cout << ds[i].adress << " ";
        cout << ds[i].tax << " ";
        cout << ds[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}