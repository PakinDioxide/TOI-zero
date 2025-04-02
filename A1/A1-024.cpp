/*
    author  : PakinDioxide
    created : 02/04/2025 00:34
    task    : A1-024
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll y, n;
    cin >> y >> n;
    if (y <= 1990) {
        if (n <= 1500) cout << 1250;
        else if (n <= 2000) cout << 1400;
        else cout << 2000;
    } else if (y < 2000) {
        if (n <= 1500) cout << 1100;
        else if (n <= 2000) cout << 1300;
        else cout << 1700;
    } else {
        if (n <= 1500) cout << 1000;
        else if (n <= 2000) cout << 1200;
        else cout << 1500;
    }
}