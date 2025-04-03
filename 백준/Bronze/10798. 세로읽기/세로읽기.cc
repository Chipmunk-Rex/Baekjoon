#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

	vector<string> matA(5, "");

	for (int y = 0; y < 5; y++) {
		string input;
		getline(cin, input);
		matA[y] = input;
	}

	int max = 0;
	int xIndex, yIndex = 0;
	for (int x = 0; x < 15; x++) {
		for (int y = 0; y < 5; y++) {
			int size = matA[y].length();
			if (size > x) {
				cout << matA[y][x];
			}
		}
	}
}