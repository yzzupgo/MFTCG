#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int M = N;
int keta = 0;
while(1){
if (N/10 == 0){
keta += 1;
break;
}
keta += 1;
N /= 10;
}
int ans = 0;
for (int i = 0; i < keta; i++){
if (i >= keta-2){
if (keta >= 3){
if ((M%100) != 0){
ans += (M%100)+1;
break;
}
else{
ans += 9*pow(10, keta-2);
break;
}
}
else{
ans += 9*pow(10, i);
break;
}
}
else {
if (i%2 == 0){
ans += 9*pow(10, i);
}
}
}
cout << ans << endl;
return 0;
}
