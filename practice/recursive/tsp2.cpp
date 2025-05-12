#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;
vector<vector<int>> dist;
vector<vector<int>> dp; // dp[visited][cur_city]

int dfs(int visited, int cur) {
    if (visited == (1 << n) - 1) // 所有城市都訪問完了
        return dist[cur][0];     // 回到起點

    if (dp[visited][cur] != -1)
        return dp[visited][cur];

    int ans = INT_MAX;

    for (int next = 0; next < n; ++next) {
        if (!(visited & (1 << next))) { // 如果 next 沒拜訪過
            int new_visited = visited | (1 << next);
            int cost = dist[cur][next] + dfs(new_visited, next);
            ans = min(ans, cost);
        }
    }

    dp[visited][cur] = ans;
    return ans;
}

int main() {
    cin >> n;
    dist.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];

    int size = 1 << n;
    dp.assign(size, vector<int>(n, -1));

    int answer = dfs(1, 0); // 只拜訪了城市 0
    cout << "Shortest distance: " << answer << endl;

    return 0;
}

/* 測資
4
0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0
*/
