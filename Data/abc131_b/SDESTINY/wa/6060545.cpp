#include <iostream>
#include <vector>
using namespace std;
int main(){
int N,L,abs,x,eat,ans;
cin >> N >> L;
abs = 100;
for (int i=0;i<N;i++){
if (L+i-1<0){
x = (L+i-1)*-1;
}
if (x<abs){
abs = x;
eat = i;
}
}
for (int i=0;i<N;i++){
if (i!=eat){
ans += L+i;
}
}
cout << ans << endl;
return 0;
}
