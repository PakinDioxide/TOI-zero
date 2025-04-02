/*
    author  : PakinDioxide
    created : 02/04/2025 03:29
    task    : A2-010
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector <tuple <ll, ll, ll>> a(n);
    ll d = 0, id = 0;
    for (auto &[x, y, z] : a) {
        ll k, kk;
        cin >> k >> kk;
        d += k;
        y = id;
        id += kk;
        x = d, z = id;
    }
    a.emplace_back(0, id, INT_MAX);
    stack <tuple <ll, ll, ll>> st; // h, idx;
    st.emplace(0, 0, 0);
    map <ll, ll> mp;
    for (auto &[h, l, r] : a) {
        while (!st.empty() && get<0>(st.top()) >= h) {
            auto [H, L, R] = st.top();
            st.pop();
            mp[R - L] = max(mp[R - L], H);
            l = L;
        }
        st.emplace(h, l, r);
    }
    vector <pair <ll, ll>> v;
    for (auto &[x, y] : mp) v.emplace_back(x, y);
    v.emplace_back(LLONG_MAX, 0);
    for (int i = v.size()-2; i >= 0; i--) v[i].second = max(v[i].second, v[i+1].second);
    while (q--) {
        ll x;
        cin >> x;
        cout << (*lower_bound(v.begin(), v.end(), make_pair(x, LLONG_MIN))).second << '\n';
    }
}