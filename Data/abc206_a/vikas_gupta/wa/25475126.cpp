#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
t = 1;
while(t--) {
int n, sum = 0, cnt = 0, i = 1;
cin >> n;
while(1) {
sum += i;
if(n <= sum) {
break;
}
i++;
}
cout << i;
}
}
