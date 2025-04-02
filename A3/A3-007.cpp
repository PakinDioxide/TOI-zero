/*
    author  : PakinDioxide
    created : 02/04/2025 15:57
    task    : A3-007
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int cnt = 0, n, l;
    cin >> l >> n;
    while (n > 0) {
        cnt++;
        for (int i = 1; i <= cnt*l; i++) n -= min(i, l);
    }
    cout << cnt << '\n';
}