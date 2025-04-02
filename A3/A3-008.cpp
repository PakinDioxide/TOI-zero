/*
    author  : PakinDioxide
    created : 02/04/2025 16:02
    task    : A3-008
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    int a[n];
    for (auto &e : a) cin >> e;
    deque <pair <int, int>> dq;
    map <int, int> cnt;
    int ccnt = 0, id = 0;
    for (int i = 0; i < n; i++) {
        if (!cnt[a[i]]) ccnt++;
        cnt[a[i]]++;
        int l = i, ok = 0;
        dq.emplace_back(a[i], i);
        while (ccnt >= k) {
            ok = 1;
            auto [x, idx] = dq.front();
            l = idx;
            cnt[x]--;
            if (cnt[x] == 0) ccnt--;
            dq.pop_front();
        }
        if (l < id || !ok) continue;
        ans += (l - id + 1) * (n - 1 - i + 1);
        id = l+1;
    }
    cout << ans << '\n';
}