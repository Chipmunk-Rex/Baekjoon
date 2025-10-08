#include<iostream>
using namespace std;

int main() {
	int count = 0;
	for (int y = 0; y < 8; y++) {
		string input;
		cin >> input;
		for (int x = 0; x < 8; x++) {
			if (((x % 2) + (y % 2)) % 2 == 0) {
				if (input[x] == 'F') {
					count++;
				}
			}
		}
	}
	cout << count;
}