/*
    author  : PakinDioxide
    created : 02/04/2025 00:14
    task    : A1-018
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    if (n == 1) cout << "I";
    else if (n == 2) cout << "II";
    else if (n == 3) cout << "III";
    else if (n == 4) cout << "IV";
    else if (n == 5) cout << "V";
    else if (n == 6) cout << "VI";
    else if (n == 7) cout << "VII";
    else if (n == 8) cout << "VIII";
    else if (n == 9) cout << "IX";
    else if (n < 0) cout << "Error : Please input positive number";
    else cout << "Error : Out of range";
}