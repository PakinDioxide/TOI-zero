/*
    author  : PakinDioxide
    created : 01/04/2025 21:16
    task    : A1-015
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    if (a.size() > 5 && b.size() > 5) cout << a[0] << a[1] << b.back() << c.back() << '\n';
    else cout << a[0] << c << b.back() << '\n';
}