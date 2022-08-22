#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
bool ans = false;
for(int i = 1; i <= x; i++){
if(2*i+4*(x-i)==y){
ans = true;
break;
}
else{
continue;
}
}
if(ans){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
