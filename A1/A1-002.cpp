/*
    author  : PakinDioxide
    created : 01/04/2025 20:49
    task    : A1-002
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    if (n >= 10) a += n/10, n %= 10;
    if (n >= 5) b += n/5, n %= 5;
    if (n >= 2) c += n/2, n %= 2;
    if (n >= 1) d += n;
    cout << "10 = " << a << '\n';
    cout << "5 = " << b << '\n';
    cout << "2 = " << c << '\n';
    cout << "1 = " << d << '\n';
}