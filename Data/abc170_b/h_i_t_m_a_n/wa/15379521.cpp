#include <bits/stdc++.h>
using namespace std;
int main (){
int x,y;
cin>> x;
cin >> y;
string ans = "No";
for(int i = 1; i<= y; i++){
for(int j = 1; j<= y; j++){
if((i*2) + ((x-i)*4) == y){
ans = "Yes";
break;
}
}
}
cout << ans;
return 0;
}
