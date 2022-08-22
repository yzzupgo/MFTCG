#include <bits/stdc++.h>
using namespace std;
int main(){
int N,sum=0,i;
cin >> N;
for(i=10;i<=N;i*=100){
sum += i*9/10;
}
if(N>=i/10)
sum += (N-(i/10))/(i/10) *(i/10) + N%(i/10) + 1;
cout << sum <<endl;
}
