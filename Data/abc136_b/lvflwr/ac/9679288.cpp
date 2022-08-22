#include <iostream>
#include <cmath>
int main(){
int n;
std::cin >> n;
int cnt = 1;
int temp = n;
while(temp>9){
++cnt;
temp /= 10;
}
int ans = 0;
for(int i=1; i<cnt; ++i)
if(i %2 == 1)
ans += 9*std::pow(10,i-1);
if(cnt %2 == 1)
ans += n-std::pow(10,cnt-1)+1;
std::cout << ans << std::endl;
return 0;
}
