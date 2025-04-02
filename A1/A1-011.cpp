/*
    author  : PakinDioxide
    created : 01/04/2025 21:09
    task    : A1-011
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    vector <pair <char, int>> v;
    for (auto &e : s) {
        if (v.empty() || v.back().first != e) v.emplace_back(e, 1);
        else v.back().second++;
    }
    for (auto &[x, y] : v) cout << y << x;
    cout << '\n';
}