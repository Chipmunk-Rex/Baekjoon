#include <iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			if(x >= y)
				cout << "*";
			else
			cout << " ";
		}
		printf("\n");
	}
	return 0;
}