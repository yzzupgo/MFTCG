#include<bits/stdc++.h>
using namespace std;
int main(void){
int n, l, sum = 0, cnt=0, zero = 0;
cin >> n >> l;
vector<int> a(n);
for(int i=0;i<n;++i) {
a[i] = l + i +1 - 1;
sum += a[i];
if(a[i] < 0) ++cnt;
else{
zero = i;
}
}
if(cnt==n){
zero = n-1;
}else if(cnt==0){
zero = 0;
}else{
if(abs(a[zero]<a[zero-1])){
zero = zero;
}else{
zero = zero-1;
}
}
cout << sum - a[zero] << endl;
}
