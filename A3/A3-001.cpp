/*
    author  : PakinDioxide
    created : 02/04/2025 11:47
    task    : A3-001
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <pair <int, int>> adj[1005];

int ans = 0;

int dfs(int u) {
    int mx = 0;
    vector <int> a;
    for (auto [t, v] : adj[u]) {
        if (t == 1) a.emplace_back(v);
        else a.emplace_back(dfs(v));
    }
    ans += abs(a[0] - a[1]);
    return 2*max(a[0], a[1]);
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    vector <int> x;
    for (int i = 1; i <= n; i++) {
        int a, l, b, r;
        cin >> a >> l >> b >> r;
        adj[i].emplace_back(a, l);
        adj[i].emplace_back(b, r);
        if (a) x.emplace_back(l);
        if (b) x.emplace_back(r);
    }
    dfs(1);
    cout << ans << '\n';
}