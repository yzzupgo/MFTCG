#include<iostream>
using namespace std;
int main(){
int N,L,eat,sum;
cin >> N >> L;
eat=200;
for(int i=0;i<N;i++){
if(abs(L+i)<eat){
eat=abs(L+i);
}
sum+=L+i;
}
cout << sum-eat << endl;
}
