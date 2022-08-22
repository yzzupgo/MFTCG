#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int a[201];
int ans = 0;
for(int i = 1;i < N + 1;i++){
a[i] = L + i - 1;
ans += a[i];
}
if(L > 1) ans -= a[1];
else if(L < 1 - N) ans -= a[N];
cout << ans << endl;
}
