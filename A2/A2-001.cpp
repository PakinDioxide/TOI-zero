/*
    author  : PakinDioxide
    created : 02/04/2025 01:14
    task    : A2-001
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m;
    cin >> n >> m;
    ll a[n+1], b[m+1], cnt = 0;
    a[0] = b[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == j % 2) {
                cnt += ((a[i] < b[j] && b[j+1] < a[i+1]) || (b[j] < a[i] && a[i+1] < b[j+1]));
            } else {
                cnt += ((a[i] < b[j+1] && b[j] < a[i+1]) || (b[j] < a[i+1] && a[i] < b[j+1]));
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = (i % 2); j <= m; j += 2) cnt += a[i] == b[j];
    }
    cout << cnt << '\n';
}