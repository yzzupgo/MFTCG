#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
int N, L; cin >> N >> L;
int A[N+10];
int ans;
for(int i=0;i<N;i++){
A[i]=L+i;
}
if(L<=0){
if(N>abs(L)) {
for(int i=0;i<N;i++){
ans+=A[i];
}
}
else{
for(int i=0;i<N-1;i++){
ans+=A[i];
}
}
}
if(L>0){
for(int i=1;i<N;i++){
ans+=A[i];
}
}
cout << ans << endl;
return 0;
}
