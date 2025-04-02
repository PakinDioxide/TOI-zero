/*
    author  : PakinDioxide
    created : 02/04/2025 15:04
    task    : A3-005
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int m, n;
    cin >> m >> n;
    vector <pair <int, int>> v;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v.emplace_back(l, 1);
        v.emplace_back(r+1, -1);
    }
    sort(v.begin(), v.end());
    int mx = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        auto [idx, k] = v[i];
        cnt += k;
        if (i < v.size()-1 && idx == v[i+1].first) continue;
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
}