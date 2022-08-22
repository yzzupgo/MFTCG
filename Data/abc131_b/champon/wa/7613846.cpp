#include <bits/stdc++.h>
using namespace std;
using Int = long long int;
template<typename T> void swap(T *t1, T *t2){ T* tmp=t1; t1=t2; t2=tmp;}
Int tmpi = 0;
double tmpd = 0.0;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
Int n, l;
cin >> n >> l;
Int min = pow(10, 9);
Int sum = 0;
for(Int i=1; i<=n; i++){
sum += l+i-1;
}
for(Int i=1; i<=n; i++){
if(abs(l+i-1) < min){
min = l+i-1;
}
}
cout << sum-min << endl;
return 0;
}
