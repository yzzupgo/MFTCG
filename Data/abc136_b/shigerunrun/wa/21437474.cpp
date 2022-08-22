#include <iostream>
#include <algorithm>
#include <cmath>
int main(){
int N;
scanf("%d", &N);
int show = N;
int keta = 0;
while(show >= 10){
show = show/10;
++keta;
}
++keta;
int total = 0;
if(keta%2!=0){
--keta;
int waru = std::pow(10, keta);
total = total + N % waru + 1;
}
for(int i=0; i<keta; i++){
if(i%2==0){
total += 9 * std::pow(10, i);
}
}
printf("%d\n", total);
return 0;
}
