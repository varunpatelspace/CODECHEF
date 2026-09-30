/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SANDWICH7                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258D/problems/SANDWICH7       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
     int b,h,c;
     cin>>b>>h>>c;
     int m = b/2;
     if(m==h+c){
         cout<<m;
     }else if(m>h+c) {
         cout<<h+c;
     } else{
         cout<<m;
     }
return 0;
}
