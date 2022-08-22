#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int total = 0;
for(int i = 1; i <= N; i++){
total += i + L - 1;
}
int total2 = total;
int ans = 999999;
for(int i = 1; i <= N; i++){
total2 -= i + L - 1;
ans = min(ans, abs(total - total2));
total2 = total;
}
if(total >= 0) cout << total - ans << endl;
else cout << total + ans << endl;
}
