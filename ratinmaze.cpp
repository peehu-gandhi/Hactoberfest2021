#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int count1 = 0;
void myfile() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void print(vector<vector<int>> &maze) {
	for (int i = 0; i < maze.size(); i++) {
		for (int j = 0; j < maze.size(); j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void findpath(int i, int j, int n, vector<vector<int>> &maze) {
	if (i == n - 1 && j == n - 1) {
		maze[i][j] = -1;
		print(maze);
		maze[i][j] = 0;
		// cout << count << endl;
		count1 += 1;
		return;
	}
	if (i < 0 || j < 0 || i >= n || j >= n || maze[i][j] == -1)
		return;

	maze[i][j] = -1;
	if (i + 1 < n && maze[i + 1][j] == 0)
		findpath(i + 1, j, n, maze);
	if (i - 1 > 0 && maze[i - 1][j] == 0)
		findpath(i - 1, j, n, maze);
	if (j + 1 < n && maze[i][j + 1] == 0)
		findpath(i, j + 1, n, maze);
	if (j - 1 > 0 && maze[i][j - 1] == 0)
		findpath(i, j - 1, n, maze);
	maze[i][j] = 0;

}
void ratmaze(vector < vector<int> >&maze) {
	findpath(0, 0, maze.size(), maze);
	cout << count1 << endl;
	// cout << count1 << endl;
}

int main() {
	myfile();
	int n;
	cin >> n;
	vector < vector<int>> maze(n, vector<int> (n, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
		}
	}
	ratmaze(maze);
	return 0;
}
