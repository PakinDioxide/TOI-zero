/*
    author  : PakinDioxide
    created : 02/04/2025 04:07
    task    : A2-013
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    map <char, int> mp;
    map <pair <char, int>, int> mp2;
    mp['H'] = 5;
    mp['O'] = 3;
    mp['J'] = 2;
    mp2[{'R', 1}] = 12;
    mp2[{'R', 2}] = 18;
    mp2[{'R', 3}] = 25;
    mp2[{'T', 1}] = 15;
    mp2[{'T', 2}] = 20;
    mp2[{'T', 3}] = 30;
    mp2[{'M', 1}] = 10;
    mp2[{'M', 2}] = 15;
    mp2[{'M', 3}] = 20;
    char a, b;
    int x, y, z;
    cin >> a >> x >> b >> y >> z;
    cout << mp[a]*x+mp2[{b, y}]*z << '\n';
}