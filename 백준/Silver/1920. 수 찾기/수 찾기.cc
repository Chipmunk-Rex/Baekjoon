#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> nNums;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;

		nNums.push_back(input);
	}
	sort(nNums.begin(), nNums.end());

	int m;
	cin >> m;
	int* mNums = new int[m];
	bool* mBools = new bool[m];
	for (int i = 0; i < m; i++) {
		cin >> mNums[i];
		mBools[i] = false;
	}

	for (int mi = 0; mi < m; mi++) {
		int mNum = mNums[mi];

		int left = 0;
		int right = n - 1;
		int mid;
		while (left <= right) {
			mid = (left + right) / 2;
			//cout << "e" << mid;
			int nNum = nNums[mid];
			if (nNum == mNum)
			{
				//cout << "d" << mid << endl;
				mBools[mi] = true;
				break;
			}
			else if (mNum < nNum)
				right = mid - 1;
			else if (mNum > nNum)
				left = mid + 1;
		}
	}


	for (int i = 0; i < m; i++) {
		cout << mBools[i] << '\n';
	}
}