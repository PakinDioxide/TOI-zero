/*
    author  : PakinDioxide
    created : 02/04/2025 01:45
    task    : A2-003
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, cnt = 0;
    cin >> n;
    ll a[n+2];
    a[0] = a[n+1] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cnt += (a[i] > a[i-1] && a[i] > a[i+1]);
    cout << cnt << '\n';
}