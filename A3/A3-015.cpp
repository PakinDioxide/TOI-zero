/*
    author  : PakinDioxide
    created : 02/04/2025 17:00
    task    : A3-015
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (auto &e : a) cin >> e;
    sort(a, a+n);
    int sum = 0, cnt = 0;
    for (auto &e : a) cnt += e, sum += 2*cnt;
    cout << sum << '\n';   
}