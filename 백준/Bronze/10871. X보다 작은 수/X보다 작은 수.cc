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
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num < x)
			cout << num << ' ';
	}
}