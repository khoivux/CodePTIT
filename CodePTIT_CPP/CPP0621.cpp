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
    return a.getId() < b.getId();
}
main()
{
    vector<SinhVien> v;
    SinhVien x;
    
    while(cin >> x)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v)
    {
        cout << it;
    }
}