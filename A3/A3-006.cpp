/*
    author  : PakinDioxide
    created : 02/04/2025 20:17
    task    : A3-006
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    cin >> n;
    vector <ll> v;
    for (int i = 1; i <= 200; i++) {for (int j = 1; j <= 9; j++) v.emplace_back(2*i); v.emplace_back(i);}
    ll a[n], ans = 0, idx = 0;
    for (auto &e : a) cin >> e;
    sort(a, a+n);
    reverse(a, a+n);
    sort(v.begin(), v.end());
    for (auto &e : a) ans += e*v[idx++];
    cout << ans << '\n';
}