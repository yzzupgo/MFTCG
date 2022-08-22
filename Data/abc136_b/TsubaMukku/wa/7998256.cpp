#include<iostream>
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
int cnt = 0;
for(int i = 0; i < n; i++){
if(GetDigit(i) % 2 == 1){
cnt++;
}
}
std::cout << cnt << std::endl;
return 0;
}
