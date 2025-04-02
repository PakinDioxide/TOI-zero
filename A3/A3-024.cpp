/*
    author  : PakinDioxide
    created : 02/04/2025 20:04
    task    : A3-024
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n, l;
    cin >> n >> l;
    pair <ll, ll> a[n];
    for (auto &[r, l] : a) cin >> l >> r;
    sort(a, a+n);
    int cnt = 0, idx = -1;
    for (auto &[r, l] : a) {
        if (l <= idx) continue;
        cnt++, idx = r;
    }
    cout << cnt << '\n';
}