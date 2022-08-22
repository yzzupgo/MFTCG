#include<iostream>
using namespace std;
int main(){
int N,L,eat=200,sum=0;
cin >> N >> L;
for(int i=0;i<N;i++){
if(abs(L+i)<abs(eat)){
eat=L+i;
}
sum+=L+i;
}
cout << sum-eat << endl;
}
