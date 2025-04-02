/*
    author  : PakinDioxide
    created : 02/04/2025 03:21
    task    : A2-009
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    vector <int> v;
    int n, c;
    cin >> n >> c;
    int a[n+1][n+1];
    for (int i = 1; i <= n; i++) {for (int j = 1; j <= n; j++) cin >> a[i][j]; v.emplace_back(i);}
    while (v.size() > 1) {
        vector <int> v2;
        for (int i = 0; i < v.size(); i += 2) {
            int x = v[i], y = v[i+1];
            if (a[x][y] == x) {
                if (c == y) c = 0, v2.emplace_back(y);
                else v2.emplace_back(x);
            } else {
                if (c == x) c = 0, v2.emplace_back(x);
                else v2.emplace_back(y);
            }
        }
        v = v2;
    }
    cout << v[0] << '\n';
}