#include <bits/stdc++.h>
#include "sol.h"
#define ll long long
#define cin in
#define cout out

using namespace std;

ifstream  in;
ofstream out;

void sol :: open() {
    in.open("in.txt");
    out.open("out.txt");
}

void sol :: close() {
    in.close();
    out.close();
}

// paste your code
// add sol :: for solve function

void sol :: solve() {
    int a, b;
    cin >> a >> b;
    if(a % 2 == b % 2) cout << 0;
    else cout << a + b;
}

