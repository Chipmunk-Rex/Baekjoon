#include <iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 0;
	int max = -1;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		sum += input;
		if (input > max) {
			max = input;
		}
	}
	cout << (sum / (float)max * 100 ) / n << endl;
}