#include <iostream>
#include <cmath>
using namespace std;
int main(){
int N;
cin >> N;
int max;
int y = 100000;
for(int i=5; i>0; i--){
if(int(N / y) > 0){
max = i;
break;
}
y = y / 10;
}
int num = 0;
if(max % 2 == 0){
int value = pow(10, max);
num += N - value + 1;
max -= 1;
for(int i=max; i >0; i--){
int value = pow(10, i) - 1;
int value_lower = pow(10, i-1);
num += value - value_lower + 1;
}
} else{
for(int i=max; i >0; i-=2){
int value = pow(10, i) - 1;
int value_lower = pow(10, i-1);
num += value - value_lower + 1;
}
}
cout << num << endl;
return 0;
}
