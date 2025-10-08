#include <iostream> 
#include <queue>
using namespace std;
int main(){queue<int> q = queue<int>();int n,k;cin >> n >> k;for (int i = 1; i <= n; i++)q.push(i);cout << "<";for (int i = 0; i < n; i++) {for (int j = 1; j < k; j++) {int temp = q.front();q.pop();q.push(temp);}int temp = q.front();q.pop();cout << temp;if (q.size() >= 1)cout << ", ";}cout << ">";}