/*
    author  : PakinDioxide
    created : 02/04/2025 01:02
    task    : A1-038
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) cout << 'X';
        else cout << '*';
    }   
}