/*
    author  : PakinDioxide
    created : 02/04/2025 17:51
    task    : A3-021
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &e : a) cin >> e;
    sort(a, a+n);
    ll x = k*a[0], cnt = 1;
    for (int i = 1; i < n; i++) {
        cnt += (ceil((double) x/a[i]) == k);
    }
    cout << cnt << '\n';
}