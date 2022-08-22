#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
int main() {
int x,y,sum = 0;
cin >> x >> y;
bool flag = false;
for(int i = x; i>=0; i--){
for(int k = 0; k<=x; k++){
sum = 2*i + 4*k;
if(sum == y && (i+k) == x){
flag = true;
break;
}
if(flag){
break;
}
}
}
if(flag){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
