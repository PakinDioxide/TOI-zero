/*
    author  : PakinDioxide
    created : 02/04/2025 01:58
    task    : A2-006
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair <int, int> d[2] = {{-1, 0}, {0, -1}};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    string a[n];
    for (auto &e : a) cin >> e;
    int ans = 0, vis[n][n];
    memset(vis, 0, sizeof(vis));
    queue <pair <int, int>> q;
    q.emplace(n-1, n-1);
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        if (vis[x][y]) continue;
        vis[x][y] = 1;
        ans++;
        for (auto [dx, dy] : d) {
            int nx = x+dx, ny = y+dy;
            if (nx < 0 || ny < 0 || a[nx][ny] == 'X') continue;
            q.emplace(nx, ny);
        }
    }
    cout << ans << '\n';
}