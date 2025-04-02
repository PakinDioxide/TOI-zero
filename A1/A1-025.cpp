/*
    author  : PakinDioxide
    created : 02/04/2025 00:36
    task    : A1-025
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    char k = s.back();
    s.pop_back();
    if (s == "Q" || s == "q") cout << "queen";
    else if (s == "J" || s == "j") cout << "jack";
    else if (s == "A" || s == "a") cout << "ace";
    else if (s == "K" || s == "k") cout << "king";
    else cout << s;
    cout << " of ";
    k = toupper(k);
    if (k == 'D') cout << "diamonds";
    else if (k == 'H') cout << "hearts";
    else if (k == 'S') cout << "spades";
    else cout << "clubs";
}