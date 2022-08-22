#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main(){
bool ans = false;
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++){
for(int j = 0; j <= x; j++){
if(i * 2 + j * 4 == y && i + j == x){
ans = true;
}
}
}
if(ans){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
