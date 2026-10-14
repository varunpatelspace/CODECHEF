/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BLUEBLACK                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260D/problems/BLUEBLACK       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a + b < 30) {
        cout << a + b;
    } else {
        cout << 30;
    }
    return 0;
}

