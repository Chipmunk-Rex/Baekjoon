#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0;i < n; i++)
	{
		int input;
		cin >> input;
		if (isPrime(input))
			count++;
	}
	cout << count;
}