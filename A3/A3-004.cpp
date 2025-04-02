/*
    author  : PakinDioxide
    created : 02/04/2025 12:13
    task    : A3-004
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    vector <ll> xx, yy;
    pair <ll, ll> a[n];
    for (auto &[x, y] : a) {
        cin >> x >> y;
        ll xk = x+y, yk = x-y;
        x = xk, y = yk;
        xx.emplace_back(x), yy.emplace_back(y);
    }
    sort(xx.begin(), xx.end()), sort(yy.begin(), yy.end());
    ll sx = xx[n/2], sy = yy[n/2], ans = 0;
    for (auto &[x, y] : a) ans += abs(x-sx) + abs(y-sy);
    cout << ans << '\n';
}