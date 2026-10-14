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
    int A, B;
    cin >> A >> B;

    if (3 * A < A + B) {
        cout << 3 * A;
    } else {
        cout << A + B;
    }

    return 0;
}
