#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
for (int c = 0; c <= x; c++){
int t = x-c;
int asi = c*2 + t*4;
if (asi == y){
ans = true;
return 0;
}
}
if (ans){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
