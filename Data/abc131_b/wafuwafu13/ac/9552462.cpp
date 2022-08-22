#include <iostream>
using namespace std;
int main(void){
int n, l;
cin >> n >> l;
int ans = 0;
if(l>=0){
for(int i = 2; i <= n; i++){
ans += l+i-1;
}
}else{
if(n - abs(l) > 0){
for(int i = 1; i <= n; i++){
ans += l+i-1;
}
}else{
for(int i = 1; i <= n; i++){
ans += l+i-1;
}
ans -= l+n-1;
}
}
cout << ans;
}
