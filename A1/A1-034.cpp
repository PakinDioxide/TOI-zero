/*
    author  : PakinDioxide
    created : 02/04/2025 00:54
    task    : A1-034
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll mn = LLONG_MAX, n;
    cin >> n;
    while (n--) {
        ll k;
        cin >> k;
        mn = min(mn, k);
    }
    cout << mn << '\n';
}