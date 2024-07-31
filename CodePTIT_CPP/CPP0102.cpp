#include <iostream>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
	 cin.ignore();
	 char c;
	 cin >> c;
	 if('A' <= c && c <= 'Z') 
	 {
	 	c += 32;
	 	cout << c;
	 }
	 else
	 {
	 	c -= 32;
	 	cout << c;
	 }
	 cout << endl;
	}
}