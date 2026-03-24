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
	int a, b;
	cin >> a >> b;
	while (a != 0 || b != 0) {
		cout << a + b << '\n';
		cin >> a >> b;
	}
}