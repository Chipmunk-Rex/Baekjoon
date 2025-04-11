#include<iostream>
#include <string>

using namespace std;
int GetTime(char input) {
	int time = 2;
	switch (input)
	{
	case 'A':
	case 'B':
	case 'C':
		return time + 1;
	case 'D':
	case 'E':
	case 'F':
		return time + 2;
	case 'G':
	case 'H':
	case 'I':
		return time + 3;
	case 'J':
	case 'K':
	case 'L':
		return time + 4;
	case 'M':
	case 'N':
	case 'O':
		return time + 5;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return time + 6;
	case 'T':
	case 'U':
	case 'V':
		return time + 7;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		return time + 8;
	default:
		return time + 9;
		break;
	}
}
int main() {
	string str; 
	cin >> str;
	
	int time =0 ;
	for (int i = 0; i < str.length(); i++) {
		time += GetTime(str[i]);
	}
	cout << time;
}