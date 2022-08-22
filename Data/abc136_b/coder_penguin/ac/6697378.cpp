#include <iostream>
int main(){
int N;
std::cin >> N;
int nketa = 0;
int n = N;
while(n>0){
n /= 10;
++nketa;
}
long long ans = 0;
int m = 1;
for(int i=1; i<nketa; ++i){
m *= 10;
if(i%2!=0) ans += m - m/10;
}
if(nketa%2!=0) ans += N - m + 1;
std::cout << ans << std::endl;
return 0;
}
