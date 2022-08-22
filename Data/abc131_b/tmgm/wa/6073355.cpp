#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;
int main(void){
int N,L,sum = 0;
cin >> N >> L;
if(N+L<0){
for(int i=0;i<N-1;i++){
sum = sum + L;
L++;
}
}else if(L<=0){
for(int i=0;i<N;i++){
sum = sum + L;
L++;
}
}else if(L>0){
for(int i=0;i<N-1;i++){
L++;
sum = sum + L;
}
}else{
for(int i=0;i<N;i++){
sum = sum + L;
L++;
}
}
cout << sum << endl;
return 0;
}
