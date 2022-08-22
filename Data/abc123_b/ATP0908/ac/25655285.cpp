#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
     
   int main() {
     int N[5];
   
     rep(i,5) cin >> N[i];

     int ichi = 10;
     int ans = 0;
     
     rep(i,5){
       ans += N[i]-(N[i] % 10);
       if(N[i] % 10 != 0) {
         ans += 10;
         ichi = min(ichi,N[i] % 10);
       }
     }
     
     cout << ans + ichi -10 << endl;

   }