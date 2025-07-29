#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;

int NeedWarms(const int N, const int M, const int K);
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int N, M, K;
		cin >> N >> M >> K;
		cout << NeedWarms(N, M, K) << endl;
	}
}

class Cabbage {
public:
	unordered_set<Cabbage*>* group;
};

Cabbage* TryGetCabbage(int x, int y, Cabbage*** cabbages, int n, int m);
int NeedWarms(const int N, const int M, const int K) {
	Cabbage*** cabbages = new Cabbage**[N];
	for (int i = 0; i < N; ++i) {
		cabbages[i] = new Cabbage*[M];
		for (int j = 0; j < M; ++j) {
			cabbages[i][j] = nullptr;
		}
	}
	unordered_set<unordered_set<Cabbage*>*> groups;
	for (int i = 0; i < K; i++) {
		int x, y;
		cin >> x >> y;

		Cabbage* cabbage = new Cabbage{};
		cabbages[x][y] = cabbage;
		cabbage->group = new unordered_set<Cabbage*>{ cabbage };
		groups.insert(cabbage->group);
		Cabbage* neghbor = TryGetCabbage(x+1, y, cabbages, N, M);
		if (neghbor != nullptr) {
			if (cabbage->group != neghbor->group) 
			{

				cabbage->group->insert(neghbor->group->begin(), neghbor->group->end());
				for (auto* c : *(neghbor->group)) 
				{
					groups.erase(c->group);
					c->group = cabbage->group;
				}

			}
		}
		neghbor = TryGetCabbage(x-1, y, cabbages, N, M);
		if (neghbor != nullptr) {
			if (cabbage->group != neghbor->group) {
				cabbage->group->insert(neghbor->group->begin(), neghbor->group->end());
				for (auto* c : *(neghbor->group)) {
					groups.erase(c->group);
					c->group = cabbage->group;
				}
			}
		}
		neghbor = TryGetCabbage(x, y+1, cabbages, N, M);
		if (neghbor != nullptr) {
			if (cabbage->group != neghbor->group) {
				cabbage->group->insert(neghbor->group->begin(), neghbor->group->end());
				for (auto* c : *(neghbor->group)) {
					groups.erase(c->group);
					c->group = cabbage->group;
				}
			}
		}
		neghbor = TryGetCabbage(x, y-1, cabbages, N, M);
		if (neghbor != nullptr) {
			if (cabbage->group != neghbor->group) {
				cabbage->group->insert(neghbor->group->begin(), neghbor->group->end());
				for (auto* c : *(neghbor->group)) {
					groups.erase(c->group);
					c->group = cabbage->group;
				}
			}
		}
	}
	return groups.size();
}
Cabbage* TryGetCabbage(int x, int y, Cabbage*** cabbages, int n, int m) 
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return nullptr;
    return cabbages[x][y];
}