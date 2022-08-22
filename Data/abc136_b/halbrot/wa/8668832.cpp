#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;
int main(){
int n;
cin >> n;
int ans;
if (n < 10) {
ans = n;
}
else if (n < 100){
ans = 9;
}
else if (n < 1000){
ans = n - 99 + 9;
}
else if (n < 10000){
ans = 909;
}
else if (n < 100000){
ans = n - 999 + 909;
}
else {
ans = 99000 + 909;
}
cout << ans;
}
