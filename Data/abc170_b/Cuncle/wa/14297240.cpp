#include <bits/stdc++.h>
using namespace std;
int x, y;
bool solve(int x, int y){
if (y*4>x) return false;
for (int i=0; i<=x; i++){
if (2*i+4*(x-i)==y) return true;
}
return false;
}
int main(){
cin>>x>>y;
if (solve(x, y)) cout<<"Yes";
else cout<<"No";
}
