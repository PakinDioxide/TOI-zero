/*
    author  : PakinDioxide
    created : 01/04/2025 21:20
    task    : A1-017
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    tuple <int, int, int, int> v[2];
    int i = 0;
    for (auto &[a, b, c, d] : v) {
        cin >> a >> b >> c;
        d = ++i;
    }
    sort(v, v+2);
    if (get<0>(v[0]) == get<0>(v[1]) && get<1>(v[0]) == get<1>(v[1]) && get<2>(v[0]) == get<2>(v[1])) cout << 0 << '\n';
    else cout << get<3>(v[0]) << '\n';
}