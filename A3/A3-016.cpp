/*
    author  : PakinDioxide
    created : 02/04/2025 17:02
    task    : A3-016
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> adj[n+1];
    vector <set <int>> deg[n+1];
    while (m--) {
        int k;
        cin >> k;
        set <int> a;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            a.insert(x);
        }
        int s;
        cin >> s;
        for (auto &e : a) adj[e].emplace_back(s);
        deg[s].emplace_back(a);
    }
    int cnt = 0, vis[n+1];
    memset(vis, 0, sizeof(vis));
    queue <int> q;
    q.emplace(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (vis[u]) continue;
        vis[u] = 1;
        cnt++;
        for (auto v : adj[u]) {
            int mn = INT_MAX;
            for (auto &s : deg[v]) {
                if (s.empty()) {mn = 0; continue;}
                if (s.find(u) == s.end()) continue;
                s.erase(s.find(u));
                mn = min(mn, (int) s.size());
            }
            if (mn == 0) q.emplace(v);
        }
    }
    cout << cnt << '\n';
}