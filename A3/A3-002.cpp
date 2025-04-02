/*
    author  : PakinDioxide
    created : 02/04/2025 11:57
    task    : A3-002
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int x, l;
    cin >> x;
    for (l = 0; l*l < x; l++);
    cout << 2*(l-1) - (x % 2 != l % 2) << '\n';
}