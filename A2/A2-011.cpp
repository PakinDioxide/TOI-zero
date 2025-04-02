/*
    author  : PakinDioxide
    created : 02/04/2025 03:57
    task    : A2-011
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    map <ll, int> vis;
    vector <ll> v;
    for (int i = 0; i < 10; i++) {
        ll x;
        cin >> x;
        if (!vis[x]) vis[x] = 1, v.emplace_back(x);
    }
    for (auto &e : v) cout << e << ' ';
    cout << '\n';
}