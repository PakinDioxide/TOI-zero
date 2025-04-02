/*
    author  : PakinDioxide
    created : 01/04/2025 21:01
    task    : A1-008
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << a+b << '\n';
    if (a+b >= 50) cout << "pass\n";
    else cout << "fail\n";
}