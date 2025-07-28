#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>

using namespace std;

int main() {
	int n;

	cin >> n;

	int numCount[10] = {0};

	for (int digit = 1; digit <= n; digit *= 10) {
		int upper = n / (digit * 10);
		int select = (n / digit) % 10;
		int lower = n % digit;

		for (int i = 0; i <= 9; i++) {
			if (i < select)
			{
				numCount[i] += (upper + 1) * digit;
			}else
			if (i > select) 
			{
				numCount[i] += (upper) * digit;
			}
			else {
				numCount[i] += (upper * digit)+(lower + 1);
			}
		}
		numCount[0] -= digit;
	}

	for (int i = 0; i <= 9; i++) {
		cout << numCount[i] << ' ';
	}
}