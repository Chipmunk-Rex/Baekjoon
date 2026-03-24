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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j < n-1)
				cout << ' ';
			else
				cout << '*';
		}
		cout << '\n';
	}
}