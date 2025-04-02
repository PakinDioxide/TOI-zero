/*
    author  : PakinDioxide
    created : 02/04/2025 01:32
    task    : A2-002
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    pair <ll, ll> a[n];
    map <ll, vector <ll>> mp1, mp2;
    for (auto &[x, y] : a) {
        cin >> x >> y;
        mp1[x-y].push_back(x);
        mp2[1000000000-x-y].push_back(x);
    }
    ll mx = 0;
    for (auto [id, e] : mp1) {
        sort(e.begin(), e.end());
        mx = max(mx, e.back() - e[0]);
    }
    for (auto [id, e] : mp2) {
        sort(e.begin(), e.end());
        mx = max(mx, e.back() - e[0]);
    }
    cout << mx << '\n';
}