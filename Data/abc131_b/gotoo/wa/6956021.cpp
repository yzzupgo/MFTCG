#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
vector<int> a(N);
for(int i = 0; i < N; i++){
a.at(i) = L + i;
}
int ans = 0;
if(a.at(0) >= 0){
for(int i = 1; i < N; i++){
ans += a.at(i);
}
}
else if(a.at(N <= 0)){
for(int i = 0; i < N - 1; i++){
ans += a.at(i);
}
}
else{
for(int i = 0; i < N; i++){
ans += a.at(i);
}
}
cout << ans << endl;
}
