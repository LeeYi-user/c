#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;
vector<vector<int>> dist;
vector<bool> visited;
int best = INT_MAX;

void dfs(int city, int count, int cost) {
    if (count == n) {
        // 回到起點城市
        best = min(best, cost + dist[city][0]);
        return;
    }

    for (int next = 0; next < n; ++next) {
        if (!visited[next]) {
            visited[next] = true;
            dfs(next, count + 1, cost + dist[city][next]);
            visited[next] = false;
        }
    }
}

int main() {
    cin >> n;
    dist.resize(n, vector<int>(n));
    visited.resize(n, false);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];

    visited[0] = true; // 起點是城市 0
    dfs(0, 1, 0);

    cout << "Shortest distance: " << best << endl;
    return 0;
}

/* 測資
4
0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0
*/
