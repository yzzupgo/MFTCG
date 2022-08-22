#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
     int time[5];
     for(int i = 0; i < 5; i++){
          cin >> time[i];
     }
     int last = 129;
     for(int i = 0; i < 5; i++){
          if(time[i] % 10 == 0) continue;
          if(time[i] % 10 <= last % 10) last = time[i];
     }
     int ans = 0;
     for(int i = 0; i < 5; i++){
          if(time[i] % 10 == 0) ans += time[i];
          else ans += time[i] + (10 - (time[i] % 10));
     }
     if(last != 129) cout << ans - (10 - (last % 10)) << endl;
     else cout << ans << endl;
     
}