#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int keta =1;
int ans=0;
int M = N;
for(int i=0; i<5; i++){
if(M / 10 > 0){
keta++;
}
M = M/10;
}
if(keta == 1){
ans = N;
}
else if(keta == 2){
ans = 9;
}
else if(keta == 3){
ans = 9 + (N- 100 + 1);
}
else if(keta == 4){
ans = 909;
}
else if(keta == 5){
ans = 909 + (N - 10000 + 1);
}
else if(keta == 6){
ans = 90909;
}
cout << ans << endl;
return 0;
}
