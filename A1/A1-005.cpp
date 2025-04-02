/*
    author  : PakinDioxide
    created : 01/04/2025 20:55
    task    : A1-005
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n, d;
    cin >> n >> d;
    n += (d >= 21);
    if (n == 13) n = 1;
    if (n <= 3) cout << "winter\n";
    else if (n <= 6) cout << "spring\n";
    else if (n <= 9) cout << "summer\n";
    else cout << "fall\n";
}