#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() {
IOS
string s;
int n;
cin >> n;
s = to_string(n);
int ns = s.length();
if(n<10){
cout << n << "\n";
return 0;
}else if(n<100){
cout << 9 << "\n";
return 0;
}
int res = 9;
if(ns%2!=0){
res+= n-pow(10,ns-1)+1;
for(int i=ns-2; i>2; i-=2){
res+= pow(10,i)-pow(10,i-1);
}
}else{
for(int i=ns-1; i>2; i-=2){
res+= pow(10,i)-pow(10,i-1);
}
}
cout << res << "\n";
return 0;
}
