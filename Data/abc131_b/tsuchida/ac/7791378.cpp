#include <iostream>
using namespace std ;
int main(){
int N,L ;
cin >> N >> L;
int sa=10000,num,sum=0 ;
for(int i=1;i<=N;i++){
if(sa > abs(L+i-1)){
sa = abs(L+i-1) ;
num = i ;
}
}
for(int i=1;i<=N;i++){
if(i != num) sum += L+i-1;
}
cout << sum ;
}
