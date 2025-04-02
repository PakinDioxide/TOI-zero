/*
    author  : PakinDioxide
    created : 02/04/2025 00:50
    task    : A1-031
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        cout << s[i];
        if ((i+1) % 3 == n % 3 && i < n-1) cout << ',';
    }
}