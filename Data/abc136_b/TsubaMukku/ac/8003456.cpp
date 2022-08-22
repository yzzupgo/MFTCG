#include<iostream>
#include<vector>
unsigned GetDigit(unsigned num){
unsigned digit=0;
while(num!=0){
num /= 10;
digit++;
}
return digit;
}
int main(void){
int n;
std::cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
if(GetDigit(i) % 2 == 1){
ans ++;
}
}
std::printf("%d\n", ans);
return 0;
}
