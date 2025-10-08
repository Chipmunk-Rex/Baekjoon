#include <iostream>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <queue>

using namespace std;

int main() {
	int n, m, k ,x;
	cin >> n >> m >> k >> x;
	unordered_multimap<int, int> map;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map.insert({a,b});
	}
	unordered_map<int, int> visits;
	set<int> isK;
	queue<int> minsu;
	minsu.push(x);
	visits.insert({x,0});
	while (minsu.size() > 0) {
		int value = minsu.front();
		int distance = visits[value];
		minsu.pop();

		unordered_multimap<int, int>::iterator it = map.find(value);
		while (it != map.end()) {
			int find = it->second;
			map.erase(it);
			if (visits.find(find) == visits.end())
			{
				minsu.push(find);
				visits.insert({ find, distance + 1});
				if (visits[find] == k) {
					isK.insert(find);
				}
			}
			it = map.find(value);
		}
	}
	if (isK.size() > 0)
		for (auto var : isK) {
			cout << var << endl;
		}
	else
		cout << -1;
}