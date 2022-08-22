#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
int main(){
int x, y;
cin >> x >> y;
for (int c = 0; c <= x; c++){
int t = x-c;
int asi = c*2 + t*4;
if (asi == y){
cout << "Yes" << endl;
break;
}
}
cout << "No" << endl;
return 0;
}
