/*
    author  : PakinDioxide
    created : 02/04/2025 00:22
    task    : A1-021
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0 || (n % 4 == 0 && n <= 1582)) cout << "yes\n";
    else cout << "no\n";
}