#include<bits/stdc++.h>
using namespace std;
int kai(int x, int y){
if (y == 0)
return 1;
else
return x*kai(x, y-1);
}
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
if (i == keta-1 && keta >= 3){
if (i%2 == 0)
ans += (M % kai(10, keta-1)) + 1;
}
else {
if (i%2 == 0)
ans += 9*pow(10, i);
}
}
cout << ans << endl;
return 0;
}
