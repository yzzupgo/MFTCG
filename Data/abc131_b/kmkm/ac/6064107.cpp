#include <iostream>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
int ans = 0;
if(L>=0){
for(int i=1;i<N;i++){
ans += L+i;
}
cout << ans;
}
else if(L+N <= 0){
for(int i=0;i<N-1;i++){
ans += L+i;
}
cout << ans;
}
else{
for(int i=0;i<N;i++){
ans += L+i;
}
cout <<ans;
}
}
