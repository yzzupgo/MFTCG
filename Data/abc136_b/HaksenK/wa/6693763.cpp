#include <iostream>
using namespace std;
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >>n;
int max = 1;
for(int i = 10*10*10*10*10; i > 1 ; i /= 10){
if(n/i > 0) {max=i;break;}
}
int ans;
if(max == 10*10*10*10*10) {
ans = 90909;
for(int i = 0; 1; i++){
if(n < 1000000+i) break;
else ans++;
}
}
else if(max == 10*10*10*10 || max == 10*10*10) {
ans = 909;
for(int i = 0; 1; i++){
if(n < 10000+i) break;
else ans++;
}
}
else if(max == 10*10 || max == 10) {
ans = 9;
for(int i = 0; 1; i++){
if(n < 100+i) break;
else ans++;
}
}
else {
ans = 0;
for(int i = 0; 1; i++){
if(n < i) break;
else ans++;
}
}
cout << ans << endl;
return 0;
}
