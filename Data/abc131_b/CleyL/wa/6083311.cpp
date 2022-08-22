#include <iostream>
using namespace std;
int main(){
int n,a;cin>>n>>a;
int sm = 0;
for(int i = 0; n > i; i++){
sm += a+i;
}
int ans = 10000000;
int ansp;
for(int i = 0; n > i; i++){
if(abs(sm-(a+i)-(a+i)) < ans){
ans = sm-(a+i)-(a+i);
ansp = i;
}
}
cout << ans+ansp+a << endl;
}
