#include<iostream>
#include<vector>
#include<string>
int main(){
int N;
std::cin >> N;
int cnt = 0;
for(int i = 1; i <= N; i++){
int keta = 0;
int num = i;
while(num > 0){
keta++;
num /= 10;
}
if(keta % 2 != 0) cnt++;
}
std::cout << cnt << std::endl;
return 0;
}
