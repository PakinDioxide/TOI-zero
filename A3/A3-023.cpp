/*
    author  : PakinDioxide
    created : 02/04/2025 18:20
    task    : A3-023
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <int> prime;

int is_prime(int x) {
    if (x < 2) return 0;
    for (auto k : prime) {
        if (x % k == 0) return 0;
        if (k*k > x) break;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int a, b;
    cin >> a >> b;
    ll dp[4][15005];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = a; i <= b; i++) {
        for (int k = 0; k < 3; k++) for (int j = 15005; j >= i; j--) dp[k+1][j] += dp[k][j-i];
    }
    ll cnt = 0;
    for (int i = 1; i <= 15005; i++) if (is_prime(i)) cnt += dp[3][i], prime.emplace_back(i);
    cout << cnt << '\n';
}