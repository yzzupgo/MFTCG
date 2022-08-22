#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int real_sum = 0;
for(int i=0;i<N;i++){
real_sum += L+i;
}
int sum = 0;
if(L>1){
sum = real_sum - L;
}else if(L<=1 && N <= (-1)*L){
sum = real_sum - (N+L-1);
}else{
sum = real_sum;
}
cout << sum << endl;
return 0;
}
