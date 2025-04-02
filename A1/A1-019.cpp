/*
    author  : PakinDioxide
    created : 02/04/2025 00:16
    task    : A1-019
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    if (a != b && b != c && c != a) cout << "all different";
    else if (a == b && b == c) cout << "all the same";
    else cout << "neither";
}