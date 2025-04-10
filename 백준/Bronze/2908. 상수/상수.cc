#include <iostream>
#include<string>

using namespace std;
string getReverse(string str) {
	string reverseStr;

	for (int i = str.length() - 1; i >= 0; i--) {
		reverseStr += str[i];
	}
	return reverseStr;
}
int main() {
	string A;
	cin >> A;
	string B;
	cin >> B;

	A = getReverse(A);
	B = getReverse(B);
	
	cout << ((stoi(A) > stoi(B)) ? stoi(A) : stoi(B));
	return 0;
}