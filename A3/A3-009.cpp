/*
    author  : PakinDioxide
    created : 02/04/2025 16:22
    task    : A3-009
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    map <int, int> cnt;
    int ccnt = 0, c = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (cnt[x] == 0) ccnt++;
        cnt[x]++;
        while (ccnt == k) {
            c++;
            for (int j = 1; j <= k; j++) {
                cnt[j]--;
                if (cnt[j] == 0) ccnt--;
            }
        }
    }
    cout << n-c*k << '\n';
}