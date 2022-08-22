#include <bits/stdc++.h>
using namespace std;
int main(){
int N, tmp;
int count = 0;
cin >> N;
tmp = N;
for(int i=0;i<5;i++){
tmp /= 10;
if(tmp < 1){
break;
}
count++;
}
int ans;
if(count %2 == 0){
ans = pow(10,count);
ans = N % ans + 1;
}else ans = 0;
for(int i=count;i>0;i--){
if(i% 2 != 0){
ans += (pow(10,i) - pow(10,i-1));
}
}
cout << ans << "\n";
}
