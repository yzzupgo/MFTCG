#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int cnt = 0;
int sum = 0;
for(int i = 0; i < 100000; i++) {
cnt += 1;
sum += i;
if(sum >= n) {
cout << cnt - 1;
break;
}
}
return 0;
}
