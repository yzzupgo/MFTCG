#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,ans = 0;
cin >> n;
for(int i = 0; i <= n; i++){
if(i >=1 && 9 >=i){
ans ++;
}
if(i >=100 && 999 >=i){
ans ++;
}
if(i >= 10000 && 99999 >= i){
ans ++;
}
}
cout << ans <<endl;
return 0;
}
