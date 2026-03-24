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
	int input;
	int count = 0;
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 9; i++)
	{
		count++;
		cin >> input;
		if (input > max)
		{
			max = input;
			maxIndex = count;
		}
	}
	cout << max << '\n' << maxIndex;
}