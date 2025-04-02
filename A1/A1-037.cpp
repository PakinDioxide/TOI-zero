/*
    author  : PakinDioxide
    created : 02/04/2025 00:57
    task    : A1-037
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    cin >> n;
    while (n >= 1000) cout << "M", n -= 1000;
    if (n >= 900) cout << "CM", n -= 900;
    while (n >= 500) cout << "D", n -= 500;
    if (n >= 400) cout << "CD", n -= 400;
    while (n >= 100) cout << "C", n -= 100;
    if (n >= 90) cout << "XC", n -= 90;
    while (n >= 50) cout << "L", n -= 50;
    if (n >= 40) cout << "XL", n -= 40;
    while (n >= 10) cout << "X", n -= 10;
    if (n >= 9) cout << "IX", n -= 9;
    while (n >= 5) cout << "V", n -= 5;
    if (n >= 4) cout << "IV", n -= 4;
    while (n >= 1) cout << "I", n--;
}