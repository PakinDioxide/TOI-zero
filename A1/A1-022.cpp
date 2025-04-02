/*
    author  : PakinDioxide
    created : 02/04/2025 00:25
    task    : A1-022
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, d;
    cin >> n >> d;
    if ((d == 12 && n >= 22) || (d == 1 && n <= 19)) cout << "capricorn";
    if ((d == 1 && n >= 20) || (d == 2 && n <= 18)) cout << "aquarius";
    if ((d == 2 && n >= 19) || (d == 3 && n <= 20)) cout << "pisces";
    if ((d == 3 && n >= 21) || (d == 4 && n <= 19)) cout << "aries";
    if ((d == 4 && n >= 20) || (d == 5 && n <= 20)) cout << "taurus";
    if ((d == 5 && n >= 21) || (d == 6 && n <= 21)) cout << "gemini";
    if ((d == 6 && n >= 22) || (d == 7 && n <= 22)) cout << "cancer";
    if ((d == 7 && n >= 23) || (d == 8 && n <= 22)) cout << "leo";
    if ((d == 8 && n >= 23) || (d == 9 && n <= 22)) cout << "virgo";
    if ((d == 9 && n >= 23) || (d == 10 && n <= 23)) cout << "libra";
    if ((d == 10 && n >= 24) || (d == 11 && n <= 21)) cout << "scorpio";
    if ((d == 11 && n >= 22) || (d == 12 && n <= 21)) cout << "sagittarius";
}