#include <bits/stdc++.h>
#define ll long long

using namespace std;
int cnt = 0;
class NhanVien
{
    private :
        string id, name, sex, birth, adr, tax, sign;
    public :
        friend istream& operator >> (istream &in, NhanVien &a)
        {
            cin.ignore();
            getline(in, a.name);
            in >> a.sex >> a.birth;
            cin.ignore();
            getline(cin, a.adr);
            cin >> a.tax >> a.sign;
            return in;
        }
        friend ostream& operator << (ostream &out, NhanVien a)
        {
            cnt++;
            string s = to_string(cnt);
            while(s.length() < 5)
            {
                s = '0' + s;
            }
            cout << s << " ";
            cout << a.name << " " << a.sex << " " << a.birth << " " << a.adr << " " << a.tax << " " << a.sign;
            cout << endl;
            return out;
        }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}