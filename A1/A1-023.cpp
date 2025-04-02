/*
    author  : PakinDioxide
    created : 02/04/2025 00:31
    task    : A1-023
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    cin >> n;
    char c;
    cin >> c;
    if (c == 'C') {
        if (n <= 0) cout << "solid";
        else if (n < 100) cout << "liquid";
        else cout << "gas";
    } else {
        if (n <= 32) cout << "solid";
        else if (n < 212) cout << "liquid";
        else cout << "gas";
    }
}