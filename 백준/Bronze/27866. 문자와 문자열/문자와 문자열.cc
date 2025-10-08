#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int i = 0;;
	getline(cin, s);
	cin >> i;
	cout << s[i - 1];
}