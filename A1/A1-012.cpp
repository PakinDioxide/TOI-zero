/*
    author  : PakinDioxide
    created : 01/04/2025 21:10
    task    : A1-012
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string a;
    cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    ll n = stoi(a), m = stoi(b);
    char k;
    cin >> k;
    cout << n << ' ' << k << ' ' << m << " = ";
    if (k == '+') cout << n+m << '\n';
    else cout << n*m << '\n';
}