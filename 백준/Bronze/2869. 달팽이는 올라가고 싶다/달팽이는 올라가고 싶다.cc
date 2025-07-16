#include <iostream>
#include<string>

using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int rv = v - a;
	int ra = a - b;

	int days = rv / ra + 1;
	if (rv % ra != 0) {
		days++;
	}
	cout << days<< endl;
}