#include <bits/stdc++.h>
#define ll long long

using namespace std;

class DoanhNghiep
{
    public :
        string ma, ten;
        int sv;

        friend istream& operator >> (istream &in, DoanhNghiep &a)
        {
            cin.ignore();
            getline(in, a.ma);
            getline(in, a.ten);
            in >> a.sv;
            return in;
        }
        friend ostream& operator << (ostream &out, DoanhNghiep a)
        {
            out << a.ma << " " << a.ten << " " << a.sv << endl;
            return out;
        }
};
bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if(a.sv == b.sv) return a.ma < b.ma;
    else return a.sv > b.sv;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n; 
    DoanhNghiep ds[n];
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds + n, cmp);
    
    int q; cin >> q;
    while(q--)
    {
        int a, b; cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN: \n";
        for(int i = 0; i < n; i++)
        {
            if(ds[i].sv <= b && ds[i].sv >= a) cout << ds[i];
        } 
    }
}