/*
    author  : PakinDioxide
    created : 02/04/2025 02:53
    task    : A2-008
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    pair <int, int> a[n];
    for (auto &[x, y] : a) cin >> x >> y;
    sort(a, a+n);
    int cnt = 0;
    for (int i = 1; i < n; i++) cnt += (a[i].second < a[i-1].second), a[i].second = max(a[i].second, a[i-1].second);
    cout << cnt << '\n';
}