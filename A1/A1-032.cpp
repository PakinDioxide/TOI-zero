/*
    author  : PakinDioxide
    created : 02/04/2025 00:52
    task    : A1-032
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n - 2*i; j++) cout << '*';
        cout << '\n';
    }
}