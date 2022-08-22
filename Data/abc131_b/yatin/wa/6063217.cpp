#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int ans = 0;
for (int i = 1; i <= N; i++) {
ans += L + i - 1;
}
if(N >= 0) {
cout << ans - L << "\n";
}else{
if(N > abs(L)) {
cout << ans << "\n";
}else{
cout << ans - (N + L - 1) << "\n";
}
}
}
