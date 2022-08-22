#include <bits/stdc++.h>
using namespace std;
int main(){
int N = 0, L = 0;
cin >> N >> L;
int ans = 0;
if(L < 0){
if(L + N > 0){
for(int i = 1; i < N+1; i++){
ans += L + i - 1;
}
}else{
for(int i = 1; i < N; i++){
ans += L + i - 1;
}
}
}else{
for(int i = 2; i < N + 1; i++){
ans += L + i - 1;
}
}
cout << ans << endl;
return 0;
}
