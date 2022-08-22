#include<iostream>
using namespace std;
int N;
int L;
int main(){
cin >> N;
cin >> L;
int sum=0;
int k=abs(L);
int t=0;
for(int i =0;i<N;i++){
sum += L + i ;
if(k>abs(L+i)) {
k=abs(L+i);
t = L+i;
}
}
sum=sum-t;
cout << sum << endl;
}
