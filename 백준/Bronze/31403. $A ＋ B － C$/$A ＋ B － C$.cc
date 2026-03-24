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
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << '\n';
	int digit = 1;
	for (digit = 1; digit <= b; digit *= 10);
	cout << (a * digit + b) - c;
}