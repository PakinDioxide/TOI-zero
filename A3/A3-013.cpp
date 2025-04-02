/*
    author  : PakinDioxide
    created : 02/04/2025 16:39
    task    : A3-013
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, s;
    cin >> n >> s;
    int mn = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k % 3 == 0 && k % 4 != 0) mn += k/3*10, mx += k/3*10;
        else if (k % 3 != 0 && k % 4 == 0) mn += k/4*10, mx += k/4*10;
        else mn += min(k/3*10, k/4*10), mx += max(k/3*10, k/4*10);
    }
    cout << s-mx << ' ' << s-mn << '\n';
}