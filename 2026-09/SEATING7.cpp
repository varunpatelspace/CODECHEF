/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SEATING7                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258D/problems/SEATING7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;

    while (t--) {
        cin >> n >> m >> k;

        int a[m + k];  

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int j = 0; j < k; j++) {

            for (int d = 1; d <= n; d++) {

                bool occupied = false;

                for (int p = 0; p < m; p++) {

                    if (a[p] == d) {   
                        occupied = true;