#include <iostream>
#include<string>
#include <queue>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <cmath>

using namespace std;
int getMinConstructionTime();
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int minX, minY, maxX, maxY;
	cin >> minY >> minX >> maxY >> maxX;

	int needRadius = max(max(max(abs(minX), abs(minY)), abs(maxX)), abs(maxY)) + 1;
	int radius = 0;

	int x = 0;
	int y = 0;
	int xSize = maxX - minX + 1;
	int ySize = maxY - minY + 1;
    int** vortex = new int*[xSize];
    for (int i = 0; i < xSize; i++) {
        vortex[i] = new int[ySize];
    }

	int offset = (needRadius);
	int count = 0;

	int maxNum = 0;
	while (radius < needRadius) 
	{
		count++;
		//cout << count;
		//cout << " ";

		if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
			vortex[x - minX][y - minY] = count;
			if (count > maxNum)
				maxNum = count;
		}

		if (y == radius)
		{
			if (x == radius && y == radius) 
				radius++;
			x++;
			continue;
		}
		if (x == -radius)
		{
			y++;
			continue;
		}
		if (y == -radius)
		{
			x--;
			continue;
		}
		if (x == radius)
		{
			y--;
			continue;
		}
		cout << "error";
	}
	//cout << endl;
	/*for (int y = -needRadius + 1; y < needRadius; y++)
	{
		for (int x = -needRadius + 1; x < needRadius; x++)
		{
		cout << vortex[x + offset][y+ offset] << " ";
		}
		cout << endl;
	}*/
	//cout << minX << " " << minY;

	int log = log10(maxNum);
	for (int y = 0; y < ySize; y++) {
		for (int x = 0; x < xSize; x++) {
			int number = vortex[x][y];
			int spaceCount = log - (int)log10(number);
			//cout << "{Space : " << spaceCount<< "}";
			for (int i = 0; i < spaceCount; i++)
				cout << ' ';
			cout << number << " ";
		}
		cout << endl;
	}

	//for (int y = minY; y <= maxY; y++)
	//{
	//	for (int x = minX; x <= maxX; x++)
	//	{
	//		cout << vortex[x + minX][y+ minY] << " ";
	//	}
	//	//cout << " gg";
	//	cout << endl;
	//}
}