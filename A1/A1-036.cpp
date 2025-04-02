/*
    author  : PakinDioxide
    created : 02/04/2025 00:56
    task    : A1-036
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll k;
    cin >> k;
    k -= k % 10;
    while  (k >= 0) cout << k << ' ', k -= 10;
}