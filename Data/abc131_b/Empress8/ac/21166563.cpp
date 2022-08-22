#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
int box[200];
int MIN = INT_MAX;
int ans = 0;
cin >> n >> l;
for(int i = 1; i <= n; i++) box[i-1]=l+i-1;
for(int i = 0; i < n; i++){
int sum = 0;
for(int j = 0; j < n; j++){
if(i != j) sum += box[j];
}
if(MIN > abs(box[i])){
MIN = abs(box[i]);
ans = sum;
}
}
cout << ans << endl;
return 0;
}
