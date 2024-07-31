#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    ifstream input;
    ofstream output;
    input.open("PTIT.in");
    output.open("PTIT.out");
    while(getline(input, a)){
        output << a << endl;
    }
    input.close();
    output.close();
}