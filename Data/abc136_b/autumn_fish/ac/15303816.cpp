#include <bits/stdc++.h>
using namespace std;
int f(int N){
int cnt = 0;
while(N>0){
cnt++;
N /= 10;
}
return cnt;
}
int main() {
int N; cin >> N;
int ans = 0;
for(int i = 1; i <= N;i++){
if(f(i)%2==1) ans++;
}
cout << ans << endl;
}
