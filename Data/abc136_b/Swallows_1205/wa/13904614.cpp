#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans = 0;
for(int i = 1; i < N; i++) {
int n = i;
int sum = 0;
while(n > 0) {
n /= 10;
sum++;
}
if(sum % 2 == 1) ans++;
}
cout << ans;
return 0;
}
