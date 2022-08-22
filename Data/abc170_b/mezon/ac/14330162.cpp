#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,x;
cin >> a >> b ;
bool flag = false;
for(int i = 0;i <= a;i++){
x = 0;
for(int j = 0; i+j <= a; j++){
x = i*2 + j*4;
if(i+j == a && x == b) flag = true;
}
}
if(flag)cout << "Yes" << endl;
else cout << "No" << endl;
}
