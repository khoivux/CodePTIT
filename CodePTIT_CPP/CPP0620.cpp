#include <bits/stdc++.h>
#define ll long long

using namespace std;

class SinhVien{
    private:
        string id, name, clas, mail;
    public:
        string getClass() { return this->clas; }
        string getId() { return this->id; }
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            getline(in, a.id);
            getline(in, a.name);
            getline(in, a.clas);
            getline(in, a.mail);
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien a)
        {
            out << a.id << " " << a.name << " " << a.clas << " " << a.mail << endl;
            return out;
        }
};
bool cmp(SinhVien a, SinhVien b)
{
    if(a.getClass() == b.getClass()) return a.getId() < b.getId();
    else return a.getClass() < b.getClass();
}
main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[1999];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}