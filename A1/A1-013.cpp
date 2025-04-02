/*
    author  : PakinDioxide
    created : 01/04/2025 21:12
    task    : A1-013
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string a, b;
    cin >> a >> b;
    if (a == "H" && b == "4567") cout << "safe unlocked\n";
    else if (a == "H") cout << "safe locked - change digit\n";
    else if (b == "4567") cout << "safe locked - change char\n";
    else cout << "safe locked\n";
}