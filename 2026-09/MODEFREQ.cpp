/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MODEFREQ                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 7, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/MODEFREQ                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        vector<int> freq(11, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        vector<int> mode(n + 1, 0);

        for (int i = 1; i <= 10; i++) {
            if (freq[i] > 0) {
                mode[freq[i]]++;
            }
        }
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            if (mode[i] > mode[ans]) {
                ans = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}