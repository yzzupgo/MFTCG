#include<iostream>
using namespace std;
int soremade(int k){
int i, ans, q;
for(i = 1, ans = 0, q = 9; i <= k; i++, q*=10){
if(i % 2 == 1) ans += q;
}
return ans;
}
int keta(int n){
int k = 0;
for(int i = 1; i <= n; i *= 10, k++);
return k;
}
int zeros(int k){
int ans = 1;
for(int i = 1; i < k; i++, ans*=10);
return ans;
}
int main(){
int n, k, ans;
cin >> n;
k = keta(n);
ans = soremade(k - 1);
if(k % 2 == 1) ans += (n % zeros(k)) + 1;
cout << ans << endl;
return 0;
}
