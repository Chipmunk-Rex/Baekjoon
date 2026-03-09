#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <cmath>

using namespace std;

bool calc(int a, int b, int c) {
	if (a * a + b * b == c * c) return true;
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	while (a != 0 && b != 0 && c != 0)
	{
		if (calc(a, b, c) || calc(b,c,a)|| calc(c,a,b)) cout << "right" << endl;
		else cout << "wrong" << endl;
		cin >> a >> b >> c;
	}
}