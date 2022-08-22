#include <iostream>
using namespace std;
int main(void){
int N,L,eat,ans = 0;
cin >> N >> L;
if (L < 0){
if(L+N-1 >= 0){
eat = 0;
}else {
eat = L+N-1;
}
}else {
eat = L;
}
for(int i = L;i < L+N;i++){
if(i == eat) continue;
ans += i;
}
cout << ans << endl;
}
