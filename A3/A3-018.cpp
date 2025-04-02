/*
    author  : PakinDioxide
    created : 02/04/2025 17:30
    task    : A3-018
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll l, n, cnt = 1;
    cin >> l >> n;
    while (n >= cnt*cnt) n -= cnt*cnt, cnt++;
    cout << l - cnt + 1 << '\n';
}