#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>

using namespace std;

int main() {
	
	int n, x;
	cin >> n >> x;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;

		q.push(input);
	}

	int count = 0;
	while (true) {
		int max = q.front();
		q.pop();
		q.push(max);

		if (max < (x + count)) {
			cout << (count) % n + 1 << endl;
			break;
		}
		count++;
	}
}