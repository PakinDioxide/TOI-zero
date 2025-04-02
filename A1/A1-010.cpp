/*
    author  : PakinDioxide
    created : 01/04/2025 21:01
    task    : A1-008
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n;
    char k;
    cin >> n >> k;
    if (k == 's' || k == 'S' || n <= 18) cout << "20\n";
    else cout << "50\n";
}