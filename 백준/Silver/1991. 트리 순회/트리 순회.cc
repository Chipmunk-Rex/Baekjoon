#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char,pair<char,char>> nodeMap;

void preorder(char node) {
	if (node == '.') return;
	cout << node;
	preorder(nodeMap[node].first);
	preorder(nodeMap[node].second);
}
void inorder(char node) {
	if (node == '.') return;
	inorder(nodeMap[node].first);
	cout << node;
	inorder(nodeMap[node].second);
}
void postorder(char node) {
	if (node == '.') return;
	postorder(nodeMap[node].first);
	postorder(nodeMap[node].second);
	cout << node;
}


int main() {

	int n;
	char node, left, right;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> node >> left >> right;
		nodeMap[node] = { left,right };
	}
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');
	cout << '\n';
}