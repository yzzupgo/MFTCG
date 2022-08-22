#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans =0;
if (N/10 <= 0 ){
ans = N ;
}
if(N/10>=1 && N/100<=0 ){
ans = 9;
}
if (N/100>=1 && N/1000<=0){
ans = N-90;
}
if(N/1000>=1 && N/10000<=0){
ans = 909;
}
if(N/10000>=1 && N/100000<=0){
ans = N-9000-90;
}
if(N/100000==1){
ans = N-1-9000-90;
}
cout << ans;
}
