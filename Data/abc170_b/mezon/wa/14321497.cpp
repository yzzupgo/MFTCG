#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,x;
cin >> a >> b ;
bool flag = false;
for(int i = 0;i <= a;i++){
x = 0;
x += i*2;
for(int j = 0; j <= a-i; j++){
x += j*4;
if(x == b) flag = true;
}
}
if(flag)cout << "Yes" << endl;
else cout << "No" << endl;
}
