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
	int n;
	cin >> n;
	int max = INT32_MIN;
	int min = INT32_MAX;
	for (int i = 0;i < n; i++)
	{
		int input;
		cin >> input;
		if (input > max)
			max = input;
		if (input < min)
			min = input;
	}
	cout << min << ' ' << max;
}