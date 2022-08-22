#include <iostream>
using namespace std;
int main(){
int N,L,x1,x2,sum,i;
cin >> N >> L;
x1 = L;
x2 = L+N-1;
if(x1>0){
sum = (2*L+N)*(N-1)/2;
}else if(x2<0){
sum = (2*L+N-2)*(N-1)/2;
}else{
sum = (2*L+N+1)*(N-1)/2;
}
cout << sum;
return 0;
}
