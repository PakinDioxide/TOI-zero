/*
    author  : PakinDioxide
    created : 02/04/2025 10:24
    task    : A2-020
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int a[n+1], vis[n+1], mx = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], vis[i] = 0;
    for (int i = 1; i <= n; i++) if (!vis[i]) {
        int x = i, cnt = 0;
        while (x != i || cnt == 0) vis[x] = 1, cnt++, x = a[x];
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
}