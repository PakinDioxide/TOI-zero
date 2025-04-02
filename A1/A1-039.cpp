/*
    author  : PakinDioxide
    created : 02/04/2025 01:03
    task    : A1-039
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll k = 1, n;
    cin >> n;
    while (n) k *= n--;
    cout << k;
}