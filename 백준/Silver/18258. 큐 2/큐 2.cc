#include<iostream>
#include<string>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;

	queue<int> que;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		switch (input[input.length() - 1])
		{
		case 'h':
		{
			int x;
			cin >> x;
			que.push(x);
		};
		break;
		case 'p':
		{
			if (que.size() == 0) {
				cout << -1 << "\n";
				break;
			}
			cout << que.front() << "\n";
			que.pop();
		};
		break;
		case 'e':
		{
			cout << que.size() << "\n";
		};
		break;
		case 'y':
		{
			cout << que.empty() << "\n";
		};
		break;
		case 't':
		{
			cout << (que.empty() ? -1 : que.front()) << "\n";
		};
		break;
		case 'k':
		{
			cout << (que.empty() ? -1 : que.back()) << "\n";
		};
		break;
		default:
			break;
		}
	}
}