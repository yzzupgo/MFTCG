#include <iostream>
#include <math.h>
using namespace std;
int main(){
int N;
cin >> N;
int n = N;
int ketasu = 1;
int sum;
while(N >= 10){
N /= 10;
ketasu++;
}
if(ketasu % 2 == 0){
for(int i = 0;2*i < ketasu;i++){
sum += 9*pow(10,2*i);
}
}else{
for(int i = 1;2*i-1 < ketasu;i++){
sum += 9*pow(10,2*i-2);
}
sum += n - pow(10,ketasu-1) +1;
}
cout << ketasu;
cout << sum;
}
