#include<iostream>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int ans = 0;
if(L >= 0){
L++;
for(int i = 1; i < N; i++){
ans += L;
L++;
}
}else{
for(int i= 0; i < N; i++){
if(L == 0){
L++;
continue;
}
ans += L;
L++;
}
if(L < 0){
L--;
ans -= L;
}
}
cout << ans << endl;
}
