#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unordered_set<int> names;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		names.insert(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		if (names.find(input) == names.end())
			cout << '0';
		else
			cout << '1';
		cout << ' ';
	}

}