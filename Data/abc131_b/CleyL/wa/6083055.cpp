#include <iostream>
using namespace std;
int main(){
int n,a;cin>>n>>a;
int sm = 0;
for(int i = 0; n > i; i++){
sm += a+i;
}
int ans = 10000000;
for(int i = 0; n > i; i++){
ans = min(ans,sm-(a+i));
}
cout << ans << endl;
}
