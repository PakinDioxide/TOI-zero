/*
    author  : PakinDioxide
    created : 02/04/2025 16:35
    task    : A3-012
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, x;
    cin >> n >> x;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0, vis[n+1];
    memset(vis, 0, sizeof(vis));
    while (x > 0 && !vis[x]) vis[x] = 1, cnt++, x = a[x];
    cout << cnt << '\n';
}