/*
    author  : PakinDioxide
    created : 02/04/2025 00:44
    task    : A1-029
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll cnt = 0;
    string s;
    cin >> s;
    for (auto &e : s) cnt += (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u');
    cout << cnt << '\n';
}