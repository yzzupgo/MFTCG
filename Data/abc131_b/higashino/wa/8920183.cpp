#include<bits/stdc++.h>
using namespace std;
int main(void){
int n,l;
cin >> n >> l;
int sum[500] = {},b = 0;
for(int i = 0;i < n;i++){
sum[i] += l + (i+1) - 1;
b += sum[i];
}
int max = 100000000,ans = 0;
for(int i = 0;i < n;i++){
if(abs(b - sum[i]) < max){
max = abs(b-sum[i]);
ans = b-sum[i];
}
}
cout << ans;
}
