// 80/100 - WA

/*
    author  : PakinDioxide
    created : 02/04/2025 11:01
    task    : A2-023
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    for (auto &e : s) e = toupper(e);
    int mx = 0, cnt = 0, sr = 0, sb = 0, ok = 1, ccnt = 0, id = 0, unn = 1;
    for (auto &e : s) {
        if (e != 'I' && e != 'T') unn = 0;
        if (sb && e != 'I' && e != 'T' && ccnt == 0) {ok = 0; break;}
        if (sr && e != 'A' && cnt == 0) {ok = 0; break;}
        if (e == 'R') sr = 1, cnt = 0;
        else if (e == 'A') {
            if (!sr) {ok = 0; break;}
            cnt++;
            mx = max(mx, cnt);
        } else if (e == 'B') sb = 1, ccnt = 0;
        else if ((e == 'I' || e == 'T') && sb) ccnt++;
        ++id;
    }
    if (!ok) cout << "no" << ' ' << id << '\n';
    else if (unn) cout << "unknown" << ' ' << s.size() << '\n';
    else if (ok) cout << "yes" << ' ' << mx << '\n';
}