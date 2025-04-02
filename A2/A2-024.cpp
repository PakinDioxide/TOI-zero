/*
    author  : PakinDioxide
    created : 02/04/2025 11:28
    task    : A2-024
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    int rb = 0, mn = 0, fr = 0, a, b, c;
    cin >> a >> b >> c;
    while (k--) {
        int x, y;
        cin >> x >> y;
        if (x % a == 0) rb += y;
        if (x % b == 0) mn += y;
        if (x % c == 0) fr += y;
    }
    if (rb == max({rb, mn, fr})) cout << "Rabbit " << rb << '\n';
    if (mn == max({rb, mn, fr})) cout << "Monkey " << mn << '\n';
    if (fr == max({rb, mn, fr})) cout << "Frog " << fr << '\n';
}