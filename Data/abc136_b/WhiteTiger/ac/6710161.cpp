#include <iostream>
int main(){
int N;
std::cin >> N;
if(N < 10){
std::cout << N << std::endl;
return 0;
}
if(N < 100){
std::cout << "9" << std::endl;
return 0;
}
if(N < 1000){
std::cout << N -90 << std::endl;
return 0;
}
if(N < 10000){
std::cout << "909" <<std::endl;
return 0;
}
if(N < 100000){
std::cout << N - 9000 -90 << std::endl;
return 0;
}
std::cout << "90909" <<std::endl;
return 0;
}
