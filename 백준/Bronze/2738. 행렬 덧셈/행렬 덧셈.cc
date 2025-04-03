#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> matA(m, vector<int>(n));
	vector<vector<int>> matB(m, vector<int>(n));

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			cin >> matA[x][y];
		}
	}
	
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			cin >> matB[x][y];
		}
	}
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			cout << matA[x][y] + matB[x][y] << " ";
		}
		cout << endl;
	}
}