#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main() {
	vector<int> vect(26, -1);
	string input;
	cin >> input;
	
	for (int i = 0; i < input.size(); i++) {
		int index = input[i] - 'a';
		if (vect[index] == -1)
			vect[index] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << vect[i] << ' ';
}