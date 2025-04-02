/*
    author  : PakinDioxide
    created : 02/04/2025 01:49
    task    : A2-005
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll w, h, n, m;
    cin >> w >> h >> n >> m;
    ll a[n+2], b[m+2];
    vector <ll> mxa, mxb, ans;
    a[0] = b[0] = 0;
    a[n+1] = w, b[m+1] = h;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    for (int i = 0; i <= n; i++) mxa.emplace_back(a[i+1] - a[i]);
    for (int i = 0; i <= m; i++) mxb.emplace_back(b[i+1] - b[i]);
    for (auto &e : mxa) for (auto &ee : mxb) ans.emplace_back(e*ee);
    sort(ans.begin(), ans.end());
    cout << ans.back() << ' ' << ans[ans.size()-2] << '\n';
}