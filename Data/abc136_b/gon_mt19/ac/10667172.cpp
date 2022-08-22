#include<iostream>
int pow10(int n){
int power = 1;
for(int i = 0; i < n; i++){
power *= 10;
}
return power;
}
int main(){
int N;
std::cin >> N;
int N_ketayou = N;
int N_keta = 0;
while(N_ketayou > 0){
N_keta++;
N_ketayou /= 10;
}
int num = 0;
if(N_keta == 1){
num += N;
std::cout << num << std::endl;
return 0;
}else{
num += 9;
}
for(int keta = 3; keta < N_keta; keta++){
if(keta % 2 == 0) continue;
num += pow10(keta - 1) * 9;
}
if(N_keta % 2 == 1){
num += N - pow10(N_keta - 1) + 1;
}
std::cout << num << std::endl;
return 0;
}
