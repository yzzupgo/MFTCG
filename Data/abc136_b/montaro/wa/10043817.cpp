#include <bits/stdc++.h>
using namespace std;
int get(int n){
int sum_n = pow(10,n)-1;
int sum_n1 = pow(10,n-1)-1;
return sum_n-sum_n1;
}
int main(){
int N;
cin >>N;
string N_str = to_string(N);
int n = N_str.size();
int sum =0;
for(int i=1;i<n;i++){
if(i%2 ==1){
sum += get(i);
}
}
if (n%2 ==1){
sum += N - pow(10,n-1)-1;
}
cout <<sum<<endl;
}
