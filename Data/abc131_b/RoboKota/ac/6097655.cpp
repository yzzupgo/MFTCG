#include<iostream>
#include<stdlib.h>
int main(){
int N, L;
std::cin >> N >>L;
std::cout << std::endl;
int apple_taste[N];
int min_taste = 0;
for(int i = 0; i < N; ++i){
apple_taste[i] = L + i;
if(apple_taste[i] < abs(apple_taste[min_taste])) min_taste = i;
}
int sum = 0;
for(int i = 0; i < N; ++i)sum += apple_taste[i];
sum -= apple_taste[min_taste];
std::cout << sum;
}
