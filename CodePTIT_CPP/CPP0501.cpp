#include <bits/stdc++.h> 
using namespace std; 
using ll = long long; 
struct Point
{ 
double x, y; 
}; 

void input(struct Point& A) 
{ 
	cin >> A.x >> A.y; 
} 

double distance(Point A, Point B) { 
double dx = A.x - B.x; 
double dy = A.y - B.y; 
return sqrt(pow(dx, 2) + pow(dy, 2)); 
} 

int main(){ 
	struct Point A, B; 
	int t; cin>>t; 
	while(t--)
	{ 
		input(A); 
		input(B); 
		cout << fixed << setprecision(4) << distance(A,B) << endl; 
	}
 }