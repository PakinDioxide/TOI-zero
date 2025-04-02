/*
    author  : PakinDioxide
    created : 02/04/2025 00:42
    task    : A1-027
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (auto &e : s) cout << (char) tolower(e);
}