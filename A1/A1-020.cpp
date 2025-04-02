/*
    author  : PakinDioxide
    created : 02/04/2025 00:20
    task    : A1-020
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) cout << "increasing";
    else if (a > b && b > c) cout << "decreasing";
    else cout << "neither";
}