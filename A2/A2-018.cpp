/*
    author  : PakinDioxide
    created : 02/04/2025 10:14
    task    : A2-018
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string a[3] = {"Red", "Green", "Blue"};
    char k;
    int n;
    cin >> k >> n;
    int st = (k == 'R' ? 0 : k == 'G' ? 1 : 2);
    for (int i = 0; i < n; i++) cout << a[(st+i)%3] << ' ';
}