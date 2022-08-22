#include <bits/stdc++.h>
using namespace std;
bool DEBUG = false;
int main(){
int N;
cin >> N;
int n = N;
int count = 0;
while(n > 0){
n /= 10;
count++;
}
int counts[6] = {9,0,900,0,90000,0};
int ans = 0;
for(int i = 0; i < count-1; i++) {
ans += counts[i];
}
if(count == 1){
ans += N % 10;
}else if(count == 3){
ans += N % 100 + 1;
}else if(count == 5){
ans += N % 10000 + 1;
}
cout << ans << endl;
return 0;
}
