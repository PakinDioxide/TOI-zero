/*
    author  : PakinDioxide
    created : 02/04/2025 01:47
    task    : A2-004
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, ans = 0;
    cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans = max(ans, ++mp[x]);
    }
    cout << ans << '\n';
}