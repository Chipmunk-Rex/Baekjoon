#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;
int getMinConstructionTime();
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cout << getMinConstructionTime() << endl;
	}
}
class Building {
public :
	int constructionTime;
	vector<int> needBuilding;
};
int* cachBuildings;
int getMinConstructionTime(Building* targetBuilding, Building* constructables) {

	int minTime = 0;
	for (int i : targetBuilding->needBuilding) {
		//cout << "building : " << i + 1 << "\n";
		Building building = constructables[i];
		int time = cachBuildings[i] == -1 ? getMinConstructionTime(&building, constructables) : cachBuildings[i];
		cachBuildings[i] = time;
		//cout << "time : " << time << "\n";
		if(time > minTime)
			minTime = time;
	}
	int totalTime = minTime + targetBuilding->constructionTime;
	return totalTime;
}
int getMinConstructionTime() {
	int N, K;
	cin >> N >> K;
	cachBuildings = new int[N];
	Building* constructables = new Building[N];
	for (int i = 0; i < N; i++) {
		int time;
		cin >> time;
		cachBuildings[i] = -1;
		constructables[i].constructionTime = time;
	}

	for (int i = 0; i < K; i++) {
		int source, target;
		cin >> source >> target;
		constructables[target-1].needBuilding.push_back(source-1);
	}
	int W;
	cin >> W;
	int minTime = getMinConstructionTime(&constructables[W-1], constructables);
	return minTime;
}
