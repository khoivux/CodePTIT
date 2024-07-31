#include <bits/stdc++.h>
#define ll long long

using namespace std;
int cnt = 0;
class SinhVien{
    private :
        string name, clas, day;
        float gpa;
    public :
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            cin.ignore();
            getline(in, a.name);
            getline(in, a.clas);
            getline(in, a.day);
            in >> a.gpa;
            if(a.day[2] != '/') a.day = "0" + a.day;
            if(a.day[5] != '/') a.day.insert(3, "0");
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien a)
        {
            cnt++;
            string s = "B20DCCN0";
            if(cnt >= 10) s += to_string(cnt);
            else s = s + "0" + to_string(cnt);
            cout << s << " ";
            out << a.name << " " << a.clas << " " << a.day << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
};int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}