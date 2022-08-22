#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y,a;
int ans = 0;
cin >> X >> Y;
for(int i = 1; i <= X; i++){
for(int j = 1; j <= X; j++){
a = 2*i+4*j;
if(Y == a){
ans = 1;}
}
}
if(ans == 1){
cout << "Yes";
}else{
cout << "No";}
return 0;
}
