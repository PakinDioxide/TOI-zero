/*
    author  : PakinDioxide
    created : 02/04/2025 17:22
    task    : A3-017
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll w, l, m, n;
    cin >> w >> l >> m >> n;
    ll mn = n*m;
    for (ll i = m; i <= n; i++) mn = min(mn, (w % i) * (l % i));
    cout << mn << '\n';
}