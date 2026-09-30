/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHOCCUT                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258D/problems/CHOCCUT         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,m,n;
   cin>>t;
   while(t--){
       cin>>m>>n;
     
       if(n%2==0 || m%2==0){
           cout<<"Yes"<<endl;
       } else{
           cout<<"No"<<endl;
       }
   }
return 0;
}
