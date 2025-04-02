/*
    author  : PakinDioxide
    created : 02/04/2025 10:18
    task    : A2-019
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    int b = 0, cnt = 0, mx = 0, bu = 0;
    for (auto &e : s) {
        if (toupper(e) == 'B') b = 1, bu = 1, cnt = 0;
        else if (toupper(e) == 'U' && bu) cnt++, mx = max(mx, cnt);
        else cnt = 0, bu = 0;
    }
    if (mx > 0) cout << "Yes " << mx;
    else if (b) {
        int fb = 0;
        for (auto &e : s) {
            if (!fb) cout << e;
            else cout << 'U';
            if (tolower(e) == 'b') fb = 1;
        }
    } else {
        char a[3] = {'B', 'U', 'U'};
        for (int i = 0; i < s.size(); i++) cout << a[i%3];
    }
}