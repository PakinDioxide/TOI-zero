/*
    author  : PakinDioxide
    created : 02/04/2025 18:01
    task    : A3-022
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int a[360];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j != r; j = (j + 1) % 360) a[j] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 360; i++) cnt += a[i];
    if (cnt == 360) {cout << 360 << '\n'; return 0;}
    int vis[360], mx = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < 360; i++) {
        if (vis[i] || !a[i]) continue;
        int l = i, r = i;
        while (a[(l-1+360)%360]) l = (l-1+360)%360, vis[l] = 1;
        while (a[(r+1)%360]) r = (r+1)%360, vis[r] = 1;
        mx = max(mx, (r-l+360+1)%360);
    }
    cout << mx << '\n';
}