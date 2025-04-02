/*
    author  : PakinDioxide
    created : 02/04/2025 00:53
    task    : A1-033
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n, cnt = 0;
    cin >> n;
    while (n--) {
        char k;
        cin >> k;
        if (k == 'A' || k == 'I' || k == 'E' || k == 'O' || k == 'U') cnt++;
    }
    cout << cnt;
}