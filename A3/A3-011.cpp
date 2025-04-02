/*
    author  : PakinDioxide
    created : 02/04/2025 16:33
    task    : A3-011
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    set <int> k;
    int n;
    cin >> n;
    int p[n+1];
    p[0] = 0;
    for (int i = 1; i <= n; i++) cin >> p[i], p[i] += p[i-1];
    for (int i = 1; i <= n; i++) for (int j = i; j <= n; j++) k.insert(p[j] - p[i-1]);
    cout << k.size() << '\n';
}