#include <iostream>
using namespace std ;
int main(){
int N,L ;
cin >> N >> L;
int sa=10000,num ;
for(int i=1;i<=N;i++){
if(sa > abs(L+i-1)){
sa = abs(L+i-1) ;
num = i ;
}
}
cout << num ;
}
