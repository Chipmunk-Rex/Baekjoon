#include <iostream>
#include <vector>
using namespace std;
int main() {

	vector<vector<int>> matA(9, vector<int>(9));

	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++) {
			cin >> matA[x][y];
		}
	}

	int max = 0;
	int xIndex, yIndex = 0;
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++) {
			if (max <= matA[x][y]) {
				max = matA[x][y];
				xIndex = x;
				yIndex = y;
			}
		}
	}

	cout << max << endl << yIndex + 1 << ' ' << xIndex + 1;
}