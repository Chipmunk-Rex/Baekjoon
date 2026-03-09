#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int sum = 0;
	for (int i = 0; i < 2; i++) {
		int a, b;
		cin >> a >> b;
		sum += a * b;
	}
	cout << sum << "\n";
}