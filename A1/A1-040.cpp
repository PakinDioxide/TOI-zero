/*
    author  : PakinDioxide
    created : 02/04/2025 01:05
    task    : A1-040
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll s = 0;
    cout << "Bye Bye\n";
    while (1) {
        ll k;
        cin >> k;
        if (k == 1) s += 100;
        else if (k == 2) s += 120;
        else if (k == 3) s += 200;
        else if (k == 4) s += 60;
        else break;
    }
    cout << "Total Calories: " << s << '\n';
}