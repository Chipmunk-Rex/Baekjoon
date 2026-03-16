
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

	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		int charNum = str[i];
		if (0 <= charNum - 'a' && charNum - 'a' < 26)
		{
			cout << (char)(charNum - 'a' + 'A');
		}
		else
		{
			cout << (char)(charNum + 'a' - 'A');
		}
	}
}