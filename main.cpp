#include <bits/stdc++.h>
#include "sol.h"

using namespace std;

void generateTests() {
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    ofstream out("in.txt");
    out << rng() % 100 << " " << rng() % 300;
    out.close();
}

bool check() {
    ifstream in("in.txt"), out("out.txt");
    int a, b;
    in >> a >> b;
    int c;
    out >> c;
    if(a + b == c) {
        in.close();
        out.close();
        return true;
    }
    cout << "TESTCASE FOUND\n";
    cout << a << " " << b << endl;
    cout << "Your code gives" << c << "\n";
    cout << "Correct answer is " << a + b << "\n";
    in.close();
    out.close();
    return false;
}

int main() {
    int T = 100;
    for(int i = 1; i <= T; i++) {
        generateTests();
        sol :: open();
        sol :: solve();
        sol :: close();
        if(check()) continue;
        cout << "It took " << i << " turn to find testcases\n";
        break;
    }
}
