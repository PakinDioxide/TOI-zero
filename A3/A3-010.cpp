/*
    author  : PakinDioxide
    created : 02/04/2025 16:26
    task    : A3-010
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k, t;
    cin >> n >> k >> t;
    t--;
    int x = 0, cnt = 0;
    while (1) {
        cnt++;
        if (x == t) break;
        x = (x + k) % n;
        if (x == 0) break;
    }
    cout << cnt << '\n';
}