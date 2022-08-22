#include <bits/stdc++.h>
using namespace std;
using Int = long long int;
template<typename T> void swap(T *t1, T *t2){ T* tmp=t1; t1=t2; t2=tmp;}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
Int n;
cin >> n;
Int k = n/10;
Int keta = 1;
while(k >= 10){
k /= 10;
keta++;
}
Int sum = 0;
for(Int i=0; i<keta; i++){
if(i%2==0){
sum += pow(10, i+1) - pow(10, i);
}
}
if(keta%2==0){
Int tmp = pow(10, keta);
while(tmp <= n){
sum++;
tmp++;
}
}
cout << sum << endl;
return 0;
}
