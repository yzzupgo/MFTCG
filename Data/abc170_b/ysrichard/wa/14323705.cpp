#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
for (int i = 0; i <= x ; i++){
for(int j = 0; j <= x ; j++){
if(j + i <= x){
if(i*2 + j*4 == y){
ans = true;
}
}
}
}
if(ans){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
