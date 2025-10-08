#include<iostream>
using namespace std;

int testcase, M, N, num, x, y;
int board[51][51];
bool visited[51][51];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };

void DFS(int x, int y)
{
	if (0 > x || x >= 51)
	{
		return;
	}
	if (0 > y || y >= 51)
	{

		return;
	}
	if (board[x][y] == 0 || visited[x][y])
		return;

	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		DFS(x + dx[i], y+ dy[i]);
	}
}

int main()
{
	cin >> testcase;
	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;
		cin >> M >> N >> num; // M : 가로길이,  N : 세로길이 
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[x][y] = 1; // 채우기
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[j][i] == 1 && visited[j][i] == false)
				{
					DFS(j, i);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}
