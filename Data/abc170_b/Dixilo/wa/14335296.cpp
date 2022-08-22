#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
bool judge=false;
cin >> x >> y;
for(int i=0; i<x; i++){
if(y == 4 * x){
judge=true;
break;
}
y -= 4 * i;
if(y == (2 * (x - i))){
judge=true;
break;
}
}
if(judge)cout << "Yes" << endl;
else cout << "No" << endl;
}
