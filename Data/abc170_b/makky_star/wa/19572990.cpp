#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);++i)
typedef long long ll;
double pi = 3.141592653589793;
int main() {
int x,y;
bool ans = false;
cin >> x >> y;
if(x==1 && y==2 || x==1 && y == 4)ans = true;
for(int i = 0;i <= x;i++){
for(int j = 0;j <= x-i;j++){
if(i*2 + j*4 == y){
ans = true;
break;
}
}
if(ans == true)break;
}
if(ans)cout << "Yes" << endl;
else cout << "No" << endl;
}
