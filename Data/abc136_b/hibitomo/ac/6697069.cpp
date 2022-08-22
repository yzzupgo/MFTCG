#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int N, ans;
cin >> N;
ans = 0;
for (int i=1,j=1; i <= N; i*=10, j++) {
if (j%2) {
if (i*10 <= N) {
ans += i*10-i;
} else {
ans += N-i+1;
}
}
}
cout << ans << endl;
return 0;
}
