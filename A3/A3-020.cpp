/*
    author  : PakinDioxide
    created : 02/04/2025 17:45
    task    : A3-020
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int h1, h2, b1, b2, x, y;
    cin >> h1 >> h2 >> b1 >> b2 >> x >> y;
    int mx = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= x-i; j++) {
            for (int a = 0; a <= y; a++) {
                for (int b = 0; b <= y-a; b++) {
                    int hh1 = i + b, hh2 = j + a;
                    int bb1 = i + a, bb2 = j + b;
                    if (hh1 <= h1 && hh2 <= h2 && bb1 <= b1 && bb2 <= b2) mx = max(mx, i + j + a + b);
                }
            }
        }
    }
    cout << mx << '\n';
}