#include <bits/stdc++.h>
using namespace std;
void solve(long long N, long long L){
long long ans = 0;
if(L <= 0){
if( L + N -1 >= 0){
for(int i = 0;i < N;i++){
ans += L;
L++;
}
}else{
for(int i = 0;i < N-1;i++){
ans += L;
L++;
}
}
}else{
L++;
for(int i = 0;i < N-1;i++){
ans += L;
L++;
}
}
cout << ans << endl;
}
int main(){
long long N;
scanf("%lld",&N);
long long L;
scanf("%lld",&L);
solve(N, L);
return 0;
}
