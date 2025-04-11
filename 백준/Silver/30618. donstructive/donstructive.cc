#include<iostream>
#include <string>

using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		//cout << (i % 2 == 0 ? i / 2 : n - i / 2 - 1) << endl;
		arr[(i % 2 == 0 ? i / 2 : n - i / 2 - 1)] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}