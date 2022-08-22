#include<bits/stdc++.h>
using namespace std;
int main(void){
int n,l;
cin >> n >> l;
int a = 0,b[500];
for(int i = 0;i < n;i++){
b[i] = l+i;
a += b[i];
}
int max = 100000000,ans = 0;
for(int i = 0;i < n;i++){
if(abs(a-(a-b[i])) < max){
max = abs(a-(a-b[i]));
ans = a-b[i];
}
}
cout << ans;
}
