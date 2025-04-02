/*
    author  : PakinDioxide
    created : 02/04/2025 17:40
    task    : A3-019
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n+1], p[n+1];
    p[0] = a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], p[i] = max(a[i-1], p[i-1]);
    while (k--) {
        int x;
        cin >> x;
        if (p[x] >= a[x]) cout << p[x] - a[x] + 1 << '\n';
        else cout << 0 << '\n';
    }
}