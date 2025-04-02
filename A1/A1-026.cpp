/*
    author  : PakinDioxide
    created : 02/04/2025 00:41
    task    : A1-026
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans1 = 0, ans2 = 0;
    ans1 = (a % 2) + (b % 2) + (c % 2);
    ans2 = !(a % 2) + !(b % 2) + !(c % 2);
    cout << "even " << ans2 << '\n' << "odd " << ans1;
}