/*
    author  : PakinDioxide
    created : 02/04/2025 00:46
    task    : A1-030
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll ans = 0, n;
    cin >> n;
    if (n == 1) {
        ll a, b;
        cin >> a >> b;
        cout << max(a, b) << '\n';
        return 0;
    }
    while (n--) {
        ll a, b;
        cin >> a >> b;
        ans += max(a, b);
        cout << max(a, b);
        if (n) cout << " + ";
        else cout << " = ";
    }
    cout << ans << '\n';
}