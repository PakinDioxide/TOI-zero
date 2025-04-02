/*
    author  : PakinDioxide
    created : 02/04/2025 10:55
    task    : A2-022
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int l, n;
    cin >> l >> n;
    vector <pair <int, int>> v;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v.emplace_back(l, 1);
        v.emplace_back(r, -1);
    }
    int cnt = 0, mx = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        auto [idx, k] = v[i];
        cnt += k;
        if (i < v.size()-1 && v[i+1].first == idx) continue;
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
}