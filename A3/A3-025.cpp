/*
    author  : PakinDioxide
    created : 02/04/2025 20:10
    task    : A3-025
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, w, l;
    cin >> n >> w >> l;
    int a[n][w+1];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {int k; cin >> k; a[i][k] = 1;}
    }
    for (int i = 1; i <= w; i++) {
        int ok = 1;
        for (int j = 0; j < n; j++) {
            int kk = 0;
            for (int k = max(1, i-l); k <= min(w, i+l); k++) kk = max(kk, a[j][k]);
            ok = min(ok, kk);
        }
        if (ok) {cout << 1 << '\n'; return 0;}
    }
    cout << 0 << '\n';
}