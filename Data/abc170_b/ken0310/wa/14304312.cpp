#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
bool ans = false;
for(int i = 0; i < x; i++){
if(2*(i+1)+4*(x-i+1)==y){
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
