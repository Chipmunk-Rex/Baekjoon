#include <iostream>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int R;
		cin >> R;
		string S;
		cin >> S;

		for (int si = 0; si < S.length(); si++) {
			for (int ri = 0; ri < R; ri++) {
				cout << S[si];
			}
		}
		cout << endl;
	}
	return 0;
}