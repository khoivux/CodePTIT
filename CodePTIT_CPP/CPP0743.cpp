#include<iostream>
#include<vector>
#include<string.h>
#include<sstream>

using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
	
		string s; 
		getline(cin,s);
		stringstream ss(s);
		string word;
		vector<string> words;
		while(ss>>word){
			words.push_back(word);
		}
		int x = words.size();

		for(auto i = (words.end()-1); i >= words.begin(); i--){
			cout << *i <<" ";
		}
		cout<< endl;
	}
}