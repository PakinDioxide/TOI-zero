/*
    author  : PakinDioxide
    created : 02/04/2025 09:58
    task    : A2-016
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    char x, y;
    string a, b;
    cin >> x >> a >> y >> b;
    int k = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a[k] == b[k] && k < 5) k++;
    if (x == y && k == 5) cout << 1000000;
    else if (k == 5) cout << 100000;
    else if (k >= 3 && x == y) cout << 2000;
    else if (k >= 2 && x == y) cout << 1000;
    else if (k >= 3) cout << 200;
    else if (k >= 2) cout << 100;
    else if (x == y) cout << 20;
    else cout << 0;
}