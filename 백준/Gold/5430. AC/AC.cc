#include<iostream>
#include<deque>

#include<string>

using namespace std;

int main() {
	string order, nums, num;
	int t, numsize;
	bool isError = false, isReverse = false; 
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		isError = isReverse = false;
		deque<int> deq;
		cin >> order >> numsize >> nums;
			// 덱에 숫자 넣기
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] >= '0' && nums[i] <= '9') {
				num += nums[i];
			}
			else if (nums[i] == ',' || nums[i] || nums[i] == ']') {
				if (!num.empty()) {
					deq.push_back(stoi(num));
					num = "";
				}
			}
		}
		for (int j = 0; j < order.size(); j++) {
			if (order[j] == 'R')
				isReverse = !isReverse;
			else
			if (order[j] == 'D') {
				if (deq.size() <= 0) {
					isError = true; 
					break;
				}
				else
				{
					isReverse ? deq.pop_back() : deq.pop_front();
				}
			}
		}

		if (isError) {
			cout << "error" << endl;
		}
		else
		{
			int cnt = deq.size();
				if 
					(cnt <= 0)
			{
						cout << "[]" << '\n';
						continue;
			}
			cout << "[";
			for (int j = 0; j < cnt - 1; j++) {
				if (isReverse)
				{
					cout << deq.back();
					deq.pop_back();
				}
				else {
					cout << deq.front();
					deq.pop_front();
				}
				cout << ",";
			}
			cout << deq.front();
			cout << "]" << endl;
		}
	}
}